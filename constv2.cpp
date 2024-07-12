#include <iostream>

void printInfo(std::string &name, int &age);

int main(){
  int age = 17;
  std::string name = "Krewer";

  age = 12;

  printInfo(name, age);
}

void printInfo(const std::string &name, const int &age){
  std::cout << name << '\n';
  std::cout << age;
}

// The code below will work, but if you try to change the value of the variables
// inside the main function, the const won't work at all
// that's why passing by reference is better than value.

// #include <iostream>

// void printInfo(std::string name, int age);

// int main(){
//   int age = 17;
//   std::string name = "Krewer";

//   age = 12;

//   printInfo(name, age);
// }

// void printInfo(const std::string name, const int age){
//   std::cout << name << '\n';
//   std::cout << age;
// }