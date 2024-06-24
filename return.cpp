#include <iostream>

// double square(double length);
// double cube(double length);

// int main(){
//     double length = 5.0;
//     double area = square(length);
//     double volume = cube(length);

//     std::cout << "Area: " << area << "cm²\n";
//     std::cout << "Volume: " << volume << "cm³\n";
//     return 0;
// }

// double square(double length){
//     return length * length;
// }

// double cube(double length){
//     return length * length * length;
// }

std::string concatString(std::string string1, std::string string2);

int main(){
    std::string firstName = "Vitor";
    std::string lastName = "Krewer";

    std::cout << "Hello, " << concatString(firstName, lastName);
}

std::string concatString(std::string string1, std::string string2){
    return string1 + " " + string2;
}