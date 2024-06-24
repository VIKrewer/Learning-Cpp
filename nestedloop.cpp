#include <iostream>

int main() {
  int rows;
  int columns;
  char symbols;

  std::cout << "Enter the amount of rows: ";
  std::cin >> rows;

  std::cout << "Enter the amount of columns: ";
  std::cin >> columns;

  std::cout << "Enter the symbol you want to use: ";
  std::cin >> symbols;

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= columns; j++) {
      std::cout << symbols;
    }
    std::cout << "\n";
  }
}
