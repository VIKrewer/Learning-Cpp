#include <iostream>

int main() {
  float pi;
  double radius;
  char selection[1];

  std::cout << "Select the value of PI\n"
            << "(1) 3 --- (2) 3.14 --- (3) 3.14159\n";
  std::cin >> selection;

  switch (selection[0]) {
  case '1':
    pi = 3;
    break;

  case '2':
    pi = 3.14;
    break;

  case '3':
    pi = 3.14159;
    break;
  default:
    std::cout << "Invalid, select (1), (2) or (3).\n";
  }

  std::cout << "Set the value of Radius\n";
  std::cin >> radius;

  double circumference = 2 * pi * radius;
  std::cout << "The result of the circumference is: " << circumference;
}
