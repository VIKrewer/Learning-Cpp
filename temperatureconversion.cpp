#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

double temp;
bool validTemp = false;
char userUnit;

int getTemperature() {
    double temp;
    cout << "Enter the Temperature: ";
    while (!(cin >> temp)) {
        cout << "Invalid input. Please enter a temperature: ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return temp;
}

int main() {

  cout << "********Temperature Conversion********" << std::endl;
            cout << "Enter unit (F°/C°): ";
            cin >> userUnit;

            switch(userUnit) {
                case 'f': {
                    temp = getTemperature();
                    cout << "The temperature in Celsius is: " << (temp - 32) * 5 / 9;
                } break;

                case 'c': {
                    temp = getTemperature();
                    cout << "The temperature in Fahrenheit is: " << temp * 1.8 + 32;
                } break;
            }
      return 0;
}