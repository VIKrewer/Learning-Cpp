#include <iostream>

int main(){
  int* pointer = nullptr;
  int x = 123;

  pointer = &x;

  if(pointer == nullptr){
    std::cout << "Address not assigned";
    std::cout << '\n' << *pointer;
  } else{
    std::cout << "Value assigned!";
    std::cout << '\n' << *pointer;
  }
}