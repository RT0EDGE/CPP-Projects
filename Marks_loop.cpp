#include<iostream>
using namespace std;

class Marks_loop{
private:
int marks;

public:
    void input(){
        cout<<"Enter your marks = ";
        cin>>marks;
    }

    void calculation(){
        if(marks>=40){
            cout<<"Pass";
        }
        else{
            cout<<"Fail";
        }
    }

    /*void display(){

    }*/

};

int main(){
    Marks_loop marks;
    marks.input();
    marks.calculation();

    return 0;
}