#include <iostream>
#include <string>

using namespace std;

class ArraySearch{
    private:
    
    int arr[]={5,13,24,23,55};
    int i,length;
    
    public:
    
    void calculation(){
        for(i=0;i < sizeof(arr) / sizeof(arr[0]);i++){
        cout<<"Your array "<<arr[i];
        }
    }
};

int main(){
    ArraySearch obj;
    obj.calculation();
    
    return 0;
}