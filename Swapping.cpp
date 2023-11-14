#include<iostream>
using namespace std;

class Swapping{
    private:
    int x,y;
    int *a,*b;
    public:
    void input(){
        cout<<"Enter the value of x : ";
        cin>>x;
        cout<<"Enter the value of y : ";
        cin>>y;
    }
    void swapV(){
        cout<<"Swap by value : "<<endl;
        int temp,m,n;
        m=x;
        n=y;

        temp=m;
        m=n;
        n=temp;
    }

    void swapR(){
        
    }
    void display(){
        cout <<"X = "<<x<<endl;
        cout<<"Y = "<<y<<endl;
    }
};

int main(){
    Swapping obj;
    obj.input();
    obj.swapV();
    obj.display();

    return 0;
}