#include <iostream>

int main(){
    std::string name = "Antonio Vitor Krewer da Silva";
    double num = 420000;
    char grade = 'A';
    bool present = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E'};

    double prices[] = {27.50, 32.99, 18.90};

    std::cout << sizeof(grades) << " Bytes\n";
    std::cout << sizeof(prices)/sizeof(double) << " Elements inside of an array\n";
    
    for(int i = 0; i < 5; i++){
        std::cout << grades[i] << "\n";
    }

    // for(int i = 0; i < sizeof(prices)/sizeof(double); i++){
    //     std::cout << prices[i] << "\n";
    // }

    //     |
    //     |
    //     V

    for(double prices : prices){
        std::cout << prices << "\n";
    }

    // they both will print everything inside of an array
    
    return 0;
}