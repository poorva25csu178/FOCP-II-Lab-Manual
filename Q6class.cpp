#include <iostream>
#include <cmath>
using namespace std;

// QUESTION 6


        class Salary {
        int empCount;
        float basic;

    public:
        void getData() {
            cout << "Enter number of employees: ";
            cin >> empCount;
        }

        void calculateSalary() {
            for (int i = 1; i <= empCount; i++) {
                cout << "\nEnter basic salary of employee " << i << ": ";
                cin >> basic;

                float bonus = basic * 0.12;
                float netSalary = basic + bonus;

                cout << "Bonus (12%) = " << bonus << endl;
                cout << "Net Salary = " << netSalary << endl;
            }
        }
    };

    int main() {
        Salary obj;
        obj.getData();
        obj.calculateSalary();
        return 0;
    }
