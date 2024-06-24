#include <iostream>

int main()
{
  int x;
  int y;
  int sum;

  y = 6;
  x = 5;

  sum = x + y;
  std::cout << x << "\n";
  std::cout << y << "\n";
  std::cout << sum << "\n";

  char grade = 'A';
  bool light = false;

  if(light == true){
    std::cout << "It's on!";
  } else {
    std::cout << "It's off!!";
  }

  std::string name = "\nKrewer\n";
  std::cout << name;

  std::string favfood = "Hamburguer";
  std::cout << favfood << "\n";

  std::string favsong = "Fly away";
  std::cout << favsong << "\n";

  std::cout << "My grade is an " << grade;
}