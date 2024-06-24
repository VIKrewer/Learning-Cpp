#include <iostream>

int main(){
    // int grade = 59;

    // grade >= 60 ? std::cout << "You passed!" : std::cout << "You failed";

    int number = 10;

    /* using number % 2 == 1 is the same, because if the result is 1 it means it is True and 0 means false, so if its true, it'll print the first part*/
    // number % 2 ? std::cout << "The number is ODD" : std::cout << "The number is even";

    bool hungry = true;

    //hungry ? std::cout << "You're hungry" : std::cout << "You're full";

    std::cout << (hungry ? "You're hungry" : "You're full");
}