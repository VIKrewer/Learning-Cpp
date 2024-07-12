#include <iostream>

int main(){
  std::string lanches[][3] = {
    {"Big Mac", "Stacker 3.0", "Smash"},
    {"Sushi", "Temaki", "Camarão"},
    {"Pepperoni", "Portuguesa", "Margherita"}
  };

  int rows = sizeof(lanches)/sizeof(lanches[0]);
  int columns = sizeof(lanches[0])/sizeof(lanches[0][0]);
  // can also be written as "int columns = size(lanches[0])/sizeof(lanches[0][0])"
  // "int allcolumns = sizeof(lanches)/sizeof(std::string);" it'll print all of values inside

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
      std::cout << lanches[i][j] << " ";
    }
    std::cout << "\n";
  }

  // Can also be written manually like this

  // std::cout << lanches[0][0] << " ";
  // std::cout << lanches[0][1] << " ";
  // std::cout << lanches[0][2] << " \n";
  
  // std::cout << lanches[1][0] << " ";
  // std::cout << lanches[1][1] << " ";
  // std::cout << lanches[1][2] << " \n";

  // std::cout << lanches[2][0] << " ";
  // std::cout << lanches[2][1] << " ";
  // std::cout << lanches[2][2] << " \n\n";
}