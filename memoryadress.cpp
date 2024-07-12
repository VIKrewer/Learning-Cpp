#include <iostream>

int main(){
  int age = 17;
  std::string name = "Krewer";
  bool student = true;

  std::cout << &age << '\n';
  std::cout << &name << '\n';
  std::cout << &student << '\n';
  // 140735252104788 - 17589949793888 - 140735252104787
}