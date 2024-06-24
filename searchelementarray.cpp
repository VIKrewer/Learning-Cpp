#include <iostream>

// int searchArray(int array[], int size, int element);

// int main(){
//     int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = sizeof(number)/sizeof(int);
//     int index;
//     int myNum;

//     std::cout << "Enter an element to search for: ";
//     std::cin >> myNum;

//     index = searchArray(number, size, myNum);

//     if(index != -1){
//         std::cout << myNum << " Is at index: " << index;
//     } else{
//         std::cout << "Isn't in the array!";
//     }

//     return 0;
// }

// int searchArray(int array[], int size, int element){
//     for(int i = 0; i < size; i++){
//         if(array[i] == element){
//             return i;
//         } 
//     }
//  return -1;
// }

int searchArray(std::string foods[], int size, std::string element);

int main(){
    std::string foods[] = {"Hamburguer", "Pizza", "Hot Dog"};
    int size = sizeof(foods)/sizeof(std::string);
    int index;
    std::string myFood;

    std::cout << "Enter an element to search for: ";
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1){
        std::cout << myFood << " Is at index: " << index;
    } else {
        std::cout << "Is not in the array";
    }
}

int searchArray(std::string foods[], int size, std::string element){
    for(int i = 0; i < size; i++){
        if(foods[i] == element){
            return i;
        }
    }
    return -1;
}