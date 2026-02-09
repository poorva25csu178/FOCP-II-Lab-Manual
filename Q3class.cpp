#include <iostream>
#include <cmath>
using namespace std;


// QUESTION 3


    class Temperature {
        float temp;

    public:
        void getFahrenheit() {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
        }

        void toCelsius() {
            float c = (temp - 32) * 5 / 9;
            cout << "Temperature in Celsius = " << c << endl;
        }

        void getCelsius() {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
        }

        void toFahrenheit() {
            float f = (temp * 9 / 5) + 32;
            cout << "Temperature in Fahrenheit = " << f << endl;
        }
    };

    int main() {
        Temperature obj;
        obj.getFahrenheit();
        obj.toCelsius();

        obj.getCelsius();
        obj.toFahrenheit();

        return 0;
    }
