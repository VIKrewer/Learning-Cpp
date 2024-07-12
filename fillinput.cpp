#include <iostream>
#include <cctype>

int main() {
  std::string lanches[10];
  int fullsize = sizeof(lanches) / sizeof(std::string);
  int halfsize = fullsize / 2;

  std::string texto;
  std::string texto2;
  char escolha;
  
  bool escolhaValid = false;

  std::cout << "Insira o texto: ";
  std::getline(std::cin, texto);

  do{
    std::cout << "Você deseja introduzir ao valor total da array? (S) or (N) \n";
    std::cin >> escolha;
    escolha = tolower(escolha);

    if(escolha == 'n'){
      std::cout << "Insira o segundo texto: ";
      std::cin >> texto2;
    }

    switch(escolha){
    case 's':
      fill(lanches, lanches + fullsize, texto);
      escolhaValid = true;
    break;

    case 'n':
      fill(lanches, lanches + halfsize, texto);
      fill(lanches + halfsize, lanches + fullsize, texto2);
      
      escolhaValid = true;
    break;

    default:
      escolhaValid = false;
    break;
  }
  }while(!escolhaValid);
  

  for(std::string lanche : lanches){
    std::cout << lanche << "\n";
  }
}