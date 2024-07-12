#include <iostream>

int main(){
  // int* pNum = NULL;
  // pNum = new int;

  // *pNum = 17;

  // std::cout << "Address: " << pNum << '\n' << "Value: " << *pNum;
  
  // return 0;

  char* pGrades = NULL;
  int amount;

  std::cout << "How many grades to enter in?: ";
  std::cin >> amount;

  pGrades = new char[amount];

  for(int i = 0; i < amount; i++){
      std::cout << "Enter the grade #" << i + 1 << ": ";
      std::cin >> pGrades[i];
  }

  system("clear");

  for (int i = 0; i < amount; i++) {
    std::cout << "Grade" <<  "#" << i + 1 << ":" << pGrades[i] << "\n";
  }

  delete[] pGrades;

  return 0;
}