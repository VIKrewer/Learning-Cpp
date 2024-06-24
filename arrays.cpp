#include <iostream>
#include <iomanip>

int main(){
    std::string food[] = {"Hamburguer", "Pizza", "Hot Dog"};

    double prices[] = {27.50, 32.99, 18.90};
   //prices[0] = 30.00; changes a value inside of an array

    std::cout << food[0] << " Costs " << std::setprecision(2) << std::fixed << prices[0] << "\n";
    std::cout << food[1] << " Costs " << std::setprecision(2) << std::fixed << prices[1] << "\n";
    std::cout << food[2] << " Costs " << std::setprecision(2) << std::fixed << prices[2] << "\n";

    return 0;
}