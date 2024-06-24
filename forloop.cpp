#include <iostream>

int main() {
  /*for (int i = 1; i <= 1000000; i++) {*/
  /*  std::cout << i << "\n";*/
  /*  if (i == 50000) {*/
  /*    break;*/
  /*  }*/
  /*}*/

  // the code above will run until it reaches 50000

  for (int i = 1; i <= 15; i++) {

    if (i == 11) {
      continue;
    }
    std::cout << i << "\n";
  }

  // it'll skip the current iteration, that is 11
}
