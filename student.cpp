#include <iostream>
#include <string>
using namespace std;

class student {
private:
    int marks;
    string name;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Name: " << name << endl;
    }

    void calculation() {
        if (marks >= 35) {
            cout << "Result: " << "Passed" << endl;
        } else {
            marks += 5;  // Increment by 5
            cout << "Marks: " << marks << endl;
            
            if (marks >= 35) {
                cout << "Result: " << "Passed" << endl;
            } else {
                cout << "Result: " << "Failed" << endl;
            }
        }
    }
};

int main() {
    student mar;
    mar.input();
    mar.calculation();
    return 0;
}