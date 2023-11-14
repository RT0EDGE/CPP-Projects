#include<iostream>
using namespace std;

int main(){
    int i,n,count=0;
    cout<<"Enter your number";
    cin>>n;

    for(i=1;i<=n;i++){
        if(n%i==0);
        count++;
    }

    if(count=2)
    cout<<"Prime number";

    else
    cout<<"It is not a prime number";

    
    return 0;

}