#include <iostream>

int getDigits(const int number);
int sumOddDigits(const std::string creditCardNumber);
int sumEvenDigits(const std::string creditCardNumber);

int main(){
  std::string creditCardNumber;
  int result = 0;

  std::cout << "Enter a credit card number: ";
  std::cin >> creditCardNumber;

  result = sumOddDigits(creditCardNumber) + sumEvenDigits(creditCardNumber);

  if(result % 10 == 0){
    std::cout << "# Card is valid!";
  } else {
    std::cout << "#Card is NOT valid!";
  }
  return 0;
}

int getDigits(const int number){
  return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string creditCardNumber){
  int sum = 0;

  for(int i = creditCardNumber.size() - 1; i >= 0 ; i-=2){
    sum += creditCardNumber[i] - '0';
  }
  return sum;
}

int sumEvenDigits(const std::string creditCardNumber){
  int sum = 0;

  for(int i = creditCardNumber.size() - 2; i >= 0 ; i-=2){
    sum += getDigits((creditCardNumber[i] - '0') * 2);
  }

  return sum;
}
