#include <iostream>

int main(){
    
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 10) + 1;

    std::cout << "********* GUESS THE NUMBER *********\n\n";

    do{
        std::cout << "Guess a number from (1-10)\n";
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            system("clear");
            std::cout << "Too high\n";
        } else if (guess < num){
            system("clear");
            std::cout << "Too low\n";
        } else{
            std::cout << "\n*********YOU GUESSED THE RIGHT NUMBER*********\n\n";
            std::cout << "Number of tries: " << tries;
        } 
    } while(guess != num);

    return 0;
}