#include<iostream>
using namespace std;

class SumOfNum{

    private:
    int number1,number2,sum;

    public:
    void input(){
        cout<<"Enter number 1"<<endl;
        cin>>number1;
        cout<<"Enter number 2"<<endl;
        cin>>number2;
    }

    void calculation(){
        sum=number1+number2;
    }

    void display(){
        cout<<"Sum of numbers is = "<<sum<<endl;
    }

};

int main(){
    SumOfNum calc;
    calc.input();
    calc.calculation();
    calc.display();

    return 0;
}