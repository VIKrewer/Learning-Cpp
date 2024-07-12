#include <iostream>

int main(){
  std::string name = "Krewer";
  std::string* pName = &name;

  int age = 17;
  int* pAge = &age;
  
  std::string pizza[] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

  std::string* ptrPizza = pizza; // You don't have to use & because an array it's already an address

  std::cout << name << '\n' << pName << '\n' << *pName;
  std::cout << '\n' << age << '\n' << pAge << '\n' << *pAge;
  std::cout << '\n' << pizza << '\n' << ptrPizza << '\n' << *ptrPizza << '\n' << ptrPizza[1];
   // See? they both are addresses, and using * will give you the first element
}