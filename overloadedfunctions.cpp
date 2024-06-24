#include <iostream>

void bakePizza();
void bakePizza(std::string topping1, std::string topping2);

int main(){
    bakePizza("pepperoni", "portuguesa");

    return 0;
}

void bakePizza(){
    std::cout << "Here's your pizza!";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here's your " << topping1 << " and " << topping2 <<  " pizza!";
}