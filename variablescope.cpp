#include <iostream>

int myNum = 3;

void callNum();

int main(){
    int myNum = 1;

    callNum();

    std::cout << myNum << "\n";

    //The program will search for local variables first then will search for global variables.
    //To use global variables, you'll have to use :: scope resolution operator

    std::cout << ::myNum;
}

void callNum(){
    int myNum = 2;
    std::cout << myNum << "\n";
}