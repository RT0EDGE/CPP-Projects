#include<iostream>
using namespace std;
class Area_Volume
{
private:
    double lenght;
    double breadth;
    double height;

public :
    void Data(double len,double brth,double hgt)
    {
        lenght=len;
        breadth=brth;
        height=hgt;
    }

    double calculateArea()
    {
       return lenght*breadth;

    }

    double calculateVolume()
    {
        return lenght*breadth*height;

    }
};

int main()
{
    Area_Volume room1;
    room1.Data(5.3,10.4,2.6);

    cout<<"Area of Room = "<< room1.calculateArea()<<endl;
    cout<<"Volume of Room = "<< room1.calculateVolume()<<endl;

    return 0;

}