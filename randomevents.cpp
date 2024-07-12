#include <iostream>
#include <ctime>

int main(){
    srand(time(0));

    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1: std::cout << "You win a Long Sword";
            break;
        case 2: std::cout << "You win a Rapier";
            break;
        case 3: std::cout << "You win a Scythe";
            break;
        case 4: std::cout << "You win a Double Pistols";
            break;
        case 5: std::cout << "You win a Legendary Aura";
            break;

        default: std::cout << "Bug.";
            break;
    }

    return 0;
}