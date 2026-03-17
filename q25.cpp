#include<iostream>
using namespace std;
class PrimeRange{
    int a,b;
    public:
    void getRange(){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    void display(){
        for(int i=a;i<=b;i++){
            int flag=0;
            if(i<=1)
                continue;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<i<<" ";
        }
    }
};
int main(){
    PrimeRange p;
    p.getRange();
    p.display();
    return 0;
}
