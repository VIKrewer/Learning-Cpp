#include <iostream>

namespace primeiraPessoa{
    std::string pessoa = "Vitor Krewer";
    int idade = 17;
    char notaEscolar = 'A';
}

namespace segundaPessoa{
    std::string pessoa = "Antonio Krewer";
    int idade = 18;
    char notaEscolar = 'B';
}

// int main(){
//     std::cout << segundaPessoa::pessoa << ", " << segundaPessoa::idade << ", " << segundaPessoa::notaEscolar;
// }

int main(){
    using namespace segundaPessoa;

    std::cout << pessoa << ", " << idade << ", " << ", " << notaEscolar;
}