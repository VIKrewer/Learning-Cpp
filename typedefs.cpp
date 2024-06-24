#include <iostream>
#include <vector>

// typedef int number;
// typedef std::string text_t;

// it's better use "using" rather than typedef

using text_t = std::string;
using number = int;

int main(){
    text_t nome = "Antonio Vitor";
    number idade;
    std::cin >> idade;
    std::cout << idade;
    std::cout << "\n, " << nome;

}