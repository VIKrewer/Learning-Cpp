#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Hypotenuse calculus\n";
    std::cout << "c = √a² + b²\n\n";

    std::cout << "Enter A value: \n";
    std::cin >> a;

    std::cout << "\nEnter B value: \n";
    std::cin >> b;

    
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenuse of the triangle is: " << c;
}