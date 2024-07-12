#include <iostream>

int main(){
    std::string foods[12];
    int fullsize = sizeof(foods)/sizeof(std::string);
    int halfsize = (sizeof(foods)/sizeof(std::string))/2;

    // for(int i = 0; i < 10; i++){
    //     std::cout << food[i] << '\n';
    // }

    fill(foods, foods + halfsize, "Hamburguer");
    fill(foods + halfsize, foods + fullsize, "Pizza");

    for(std::string food : foods){
        std::cout << food << '\n';
    }
    return 0;
}