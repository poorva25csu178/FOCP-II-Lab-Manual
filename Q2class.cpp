#include <iostream>
#include <cmath>
using namespace std;

// QUESTION 2


    class Circle {
        float radius;

    public:
        void getRadius() {
            cout << "Enter radius of the fountain: ";
            cin >> radius;
        }

        void calculateArea() {
            float area = 3.14 * radius * radius;
            cout << "Area of the circular fountain = " << area;
        }
    };

    int main() {
        Circle obj;
        obj.getRadius();
        obj.calculateArea();
        return 0;
}
