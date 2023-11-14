#include <iostream>
using namespace std;

class Factorial
{
private:
    int i, n, f;

public:
    void input()
    {
        f = 1;
        cout << "Enter the Number : ";
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }

        cout << f;
    }  
};

int main()
{
    Factorial grp;
    grp.input();

    return 0;
}