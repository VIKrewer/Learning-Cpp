#include <iostream>

// void walk(int steps);

int factorial(int number);

int main(){
  int num;
  int result;

  std::cout << "Enter the number to factore it: ";
  std::cin >> num;

  result = factorial(num);
  std::cout << result;
}

int factorial(int number){

  int result = number;

  // Using recursion

  // it's way easier

  if(number > 1/* I think it could be 1 or 0*/){
    return number * factorial(number - 1);
  } else {
    return 1;
  }

  // Using for loop

  // int result = number;

  // for(int i = 1; i < number; i++){
  //   result *= i;
  // }
  // return result;
}
// void walk(int steps){
//   // for(int i = 0; i < steps; i++){
//   //   std::cout << "You take a step\n";
//   // }

//   if(steps > 0){
//     std::cout << "You take a step\n";
//     walk(steps - 1);
//   }
// }