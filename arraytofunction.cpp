#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {49.99, 15.59, 28.90};
    int size = sizeof(prices)/sizeof(double);
    std::cout << size << '\n';
    double total = getTotal(prices, size);

    std::cout << "R$" << total;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}