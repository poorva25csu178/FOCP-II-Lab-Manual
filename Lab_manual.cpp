#include <iostream>
using namespace std;

int main(){


/*================================================= Q1 average ==================================================


    float marks1, marks2, marks3, marks4, marks5, average;

    // cout<<"Enter marks1" <<"\n" <<"Enter marks2"<<"\n" <<"Enter marks2"<<"\n" <<"Enter marks2"<<"\n" <<"Enter marks2";

    cout<<"Enter marks1: ";
    cin>>marks1;
    cout<<"\n";

    cout<<"Enter marks2: ";
    cin>>marks2;
    cout<<"\n";

    cout<<"Enter marks3: ";
    cin>>marks3;
    cout<<"\n";

    cout<<"Enter marks4: ";
    cin>>marks4;
    cout<<"\n";

    cout<<"Enter marks5: ";
    cin>>marks5;
    cout<<"\n";

    // average = (marks1+marks2+marks3+marks4+marks5)/5;

    cout<<"Average of all marks is "<<(marks1+marks2+marks3+marks4+marks5)/5; // OR <<average;

*/



/*================================================ Q2 area =====================================================


    float r, pi=3.14;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area is: "<<pi*r*r;

*/



/*============================================ Q3 farenheit to celcius ==================================================


    float f, c;
    cout<<"Enter temp in F ";
    cin>>f;
    c=(f-32)*5/9;
    cout<<"temp in c is " <<c;

*/



/*================================================== Q4 discount =======================================================


    int item_no, quantity, unit_price, total_bill;

    cout<<"Enter item no: ";
    cin>>item_no;
    cout<<"\n";

    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<"\n";

    cout<<"Enter unit_price: ";
    cin>>unit_price;
    cout<<"\n";

    cout<<"Total bill: "<<quantity*unit_price*0.20;

*/



/*================================================== Q5 swapping values =======================================================


    int a, b, c;

    cout<<"Enter value of a: ";
    cin>> a;

    cout<<"\n Enter value of b: ";
    cin>> b;

    // c=a;
    // a=b;
    // b=c;

    // OR

    // a = a + b;
    // b = a - b;
    // a = a - b;

    // ORR

    // a = a * b;
    // b = a / b;
    // a = a / b;

    // ORRR

    // swap(a,b);


    cout<<"Values after swapping are: ";
    cout<< "a = " << a;
    cout<< " b = " << b;

*/



/*====================================================== Q6 bonus =======================================================


    float basic_salary, bonus=1.12, no , n;

    cout<<"Enter total no. of employees: ";
    cin>>n;

    for (int i=1; i<=n; i++){

    cout<<"\n Enter no. of employee: ";
    cin>>no;

    cout<<"\n Enter basic salary of employee: ";
    cin>>basic_salary;

    cout<<"\n Net salary of employee: "<<basic_salary*bonus;

    }

*/



/*====================================================== Q7 winner =======================================================


    int p1, p2, p3;

    cout << "Enter score of Player 1: ";
    cin >> p1;

    cout << "Enter score of Player 2: ";
    cin >> p2;

    cout << "Enter score of Player 3: ";
    cin >> p3;

    if (p1 > p2 && p1 > p3) {
        cout << "Player 1 is the winner";
    }
    else if (p2 > p1 && p2 > p3) {
        cout << "Player 2 is the winner";
    }
    else if (p3 > p1 && p3 > p2) {
        cout << "Player 3 is the winner";
    }
    else if (p1 == p2 && p1 > p3) {
        cout << "Player 1 and Player 2 are tied for the lead";
    }
    else if (p1 == p3 && p1 > p2) {
        cout << "Player 1 and Player 3 are tied for the lead";
    }
    else if (p2 == p3 && p2 > p1) {
        cout << "Player 2 and Player 3 are tied for the lead";
    }
    else {
        cout << "All three players are tied";
    }

*/



    return 0;
}
