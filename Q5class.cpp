#include <iostream>
#include <cmath>
using namespace std;

// QUESTION 5


    class Swap {
        int a, b;

    public:
        void getData() {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        void usingTemp() {
            int temp = a;
            a = b;
            b = temp;
            cout << "After swapping using temp: " << a << " " << b << endl;
        }

        void withoutTemp() {
            a = a + b;
            b = a - b;
            a = a - b;
            cout << "After swapping without temp: " << a << " " << b << endl;
        }
    };

    int main() {
        Swap obj;
        obj.getData();
        obj.usingTemp();
        obj.withoutTemp();
        return 0;
    }
