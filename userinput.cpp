#include <iostream>

int main(){
    using namespace std;
    std::string name;

    cout << "Age";
    int age;
    cin >> age;

    cout << "Name";
    std::getline(std::cin >> std::ws /*std::ws means to clear the input buffer "ws" means whitespaces*/, name); //std::getline will get a full string with whitespace("Antonio Vitor")


    cout << name << age;
}