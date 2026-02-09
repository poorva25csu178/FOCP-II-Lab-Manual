#include <iostream>
#include <cmath>
using namespace std;

// QUESTION 4


    class Bill {
        int itemNo, quantity;
        float unitPrice;

    public:
        void getData() {
            cout << "Enter item number: ";
            cin >> itemNo;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter unit price: ";
            cin >> unitPrice;
        }

        void calculateBill() {
            float amount = quantity * unitPrice;
            float discount = amount * 0.20;
            float total = amount - discount;

            cout << "Total amount before discount = " << amount << endl;
            cout << "Discount (20%) = " << discount << endl;
            cout << "Final bill amount = " << total << endl;
        }
    };

    int main() {
        Bill obj;
        obj.getData();
        obj.calculateBill();
        return 0;
    }
