#include<iostream>
using namespace std;

class NumberCounting{
    private:
    int i,number;
    public:
    void input(){
        cout<<"Enter number"<<endl;
        cin>>number;
    }
     
    void display(){
        cout<<"Counting numbers =";
    }
    void calculation(){
        for(i=number;i<=10;i++){
            cout<<i;
        }

    }
};

int main(){
    NumberCounting home;
    home.input();
    home.display();
    home.calculation();

    return 0;

}