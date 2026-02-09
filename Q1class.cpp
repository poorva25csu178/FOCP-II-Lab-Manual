#include <iostream>
#include <cmath>
using namespace std;

// QUESTION 1



    class Average {
        float m1, m2, m3;

    public:
        void getMarks() {
            cout << "Enter marks of three students: ";
            cin >> m1 >> m2 >> m3;
        }

        void calculateAverage() {
            float avg = (m1 + m2 + m3) / 3;
            cout << "Average marks = " << avg;
        }
    };

    int main() {
        Average obj;
        obj.getMarks();
        obj.calculateAverage();

    return 0;}
