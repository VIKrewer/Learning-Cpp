#include <iostream>

// Pass by value down below (Don't use it too much, does not work always)
// use it only when you have a reason to pass by value

// void swapText(std::string x, std::string y);

// int main(){
//   std::string pais = "Brazil";
//   std::string capital = "Brasília";

//   swap(pais, capital);

//   std::cout
//  << "País: " << pais
//  << '\n' 
//  << "Capital: " << capital;
  
// }

// void swapText(std::string x, std::string y){
//   std::string temp;
//   temp = x;
//   x = y;
//   y = temp;

//   // or

//   /*
//   std::string temp;
//   temp = pais;
//   pais = capital;
//   capital = temp;
//   */
// }

/*
Pass by reference, using "&" in front of the variable, will pass the ram address,
 use it often as you can, it'll work more often than passing by value.
  
*/ 
void swapNumber(int &x, int &y);

int main(){
  int x = 32;
  int y = 16;

  swapNumber(x, y);

  std::cout 
  << "X: " << x
  << '\n'
  << "Y: " << y;
}

void swapNumber(int &x, int &y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}