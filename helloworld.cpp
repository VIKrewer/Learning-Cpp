#include <GLFW/glfw3.h>
#include <leif/leif.h>

static int winw = 800, winh = 800;

static void resizecb(GLFWwindow* window, int w, int h) {
  winw = w;
  winh = h;
  glViewport(0, 0, w, h);
  // Resize the leif display on window resize
  lf_resize_display(w, h);
}

int main() {
  glfwInit();
  GLFWwindow* window = glfwCreateWindow(winw, winh, "Hello", NULL, NULL);

  glfwMakeContextCurrent(window);

  glfwSetFramebufferSizeCallback(window, resizecb);

  lf_init_glfw(winw, winh, window);

  // Loading a bigger font (replace /home/cococry with your user)
  LfFont bigfont = lf_load_font("/home/cococry/.leif/assets/fonts/inter.ttf", 50);

  while(!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    // Starting leif context
    lf_begin();

    const char* text = "Hello, Leif!";
    const char* btntext = "Exit";

    // Defining properties of the button
    LfUIElementProps btnprops = lf_get_theme().button_props;
    btnprops.margin_left = 0.0f; btnprops.margin_top = 15.0f; btnprops.border_width = 0.0f; btnprops.corner_radius = 9.0f;
    btnprops.text_color = LF_WHITE;
    btnprops.color = (LfColor){90, 90, 90, 255};

    // Beginnig a new container
    {
      // Styling the container (setting corner radius)
      LfUIElementProps props = lf_get_theme().div_props;
      props.corner_radius = 10.0f;
      lf_push_style_props(props);

      // Positioning the container in the center
      float width = 400.0f, height = 400.0f;
      lf_div_begin(((vec2s){(winw - width) / 2.0f, (winh - height) / 2.0f}), ((vec2s){width, height}), false);

      // Popping the container's props again
      lf_pop_style_props();
    }

    /* Text */
    {
      // Setting big font
      lf_push_font(&bigfont);
      // Center the text horizontally
      lf_set_ptr_x_absolute((winw - lf_text_dimension(text).x) / 2.0f);
      // Center the text (and button) vertically
      lf_set_ptr_y_absolute((winh - (lf_text_dimension(text).y + lf_text_dimension(btntext).y + btnprops.padding * 2.0f + btnprops.margin_top)) / 2.0f);

      // Remove any margin
      LfUIElementProps props = lf_get_theme().text_props;
      props.margin_left = 0.0f; props.margin_right = 0.0f;
      // Push the style props
      lf_push_style_props(props);

      // Render the text
      lf_text(text);

      // Pop the style props
      lf_pop_style_props();

      // Unsetting big font
      lf_pop_font();
    }

    // Advance into the next line
    lf_next_line();

    /* Exit Button */
    {
      const float width = 180.0f;

      lf_push_style_props(btnprops);
      // Center the button horizontally
      lf_set_ptr_x_absolute((winw - (width + btnprops.padding * 2.0f)) / 2.0f);

      // Rendering a button with fixed scale (-1 stands for "use normal height")
      if(lf_button_fixed(btntext, width, -1) == LF_CLICKED) {
        // Closing the window when you pressed the button
        glfwSetWindowShouldClose(window, 1);
      }

      lf_pop_style_props();
    }

    // Ending the container
    lf_div_end();

    // Ending leif context
    lf_end();

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  lf_terminate();
  glfwDestroyWindow(window);
  glfwTerminate();
}