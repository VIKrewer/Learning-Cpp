#include <iostream>

int main() {
  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  /*if(name.length() > 12){*/
  /*  std::cout << "Your name is taking up more than 12 characters!";*/
  /*} else {*/
  /*  std::cout << "Welcome, " << name;*/
  /*}*/

  /*!name.empty() ? std::cout << "Welcome, " << name : std::cout << "You didn't
   * set a name";*/

  /*name.clear();*/
  /*std::cout << name;*/

  /*name.append("@gmail.com");*/
  /* std::cout << name;*/
  /*if (30 > 10) {*/
  /*  std::cout << "Hi";*/
  /*} else {*/
  /*  std::cout << "NO"*/
  /*}*/
  /*std::cout << name.at(1);*/

  /*std::cout << name.insert(0, "@");*/
  /*std::cout << name.find('r');*/
  std::cout << name.erase(0, 3);
}
