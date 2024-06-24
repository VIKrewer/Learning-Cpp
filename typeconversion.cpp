#include <iostream>

int main(){
    //implicit = automaticly
    //explicit = insert a new value to a date

    //char x = 100;
    //std::cout << 100; will only display 100 but

    //std::cout << (char)100; will display as "char" so will display "d"

    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;
    std::cout << score << "%";
}