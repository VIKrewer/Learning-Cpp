#include <iostream>

int main(){
  std::string favComidas[5];
  int size = sizeof(favComidas)/sizeof(std::string);

  for(int i = 0; i < size; i++){
    std::cout << "Enter your #" << i + 1 << " food: ";
    std::getline(std::cin, favComidas[i]);
  }

  system("clear");
  std::cout << "******Your top 5 foods are******\n\n";

  for(std::string comida : favComidas){
    std::cout << comida << '\n';
  }
}