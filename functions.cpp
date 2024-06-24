#include <iostream>

void happyBirthday(std::string name, int age);

int main(){
    std::string name = "Krewer";
    int age = 17;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout<< "Happy birthday to " << name << "!\n";
    std::cout<< "Happy birthday to " << name << "!\n";
    std::cout<< "Happy birthday dear " << name << "!\n";
    std::cout<< "Happy birthday to " << name << "!\n";
    std::cout<< "You're " << age << " Years Old!!!";
}