#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "a = ";
    cin >> a;

    float b;
    cout << "b = ";
    cin >> b;

    float sum = a+b;
    float subtraction = a-b;
    float multiplication =  a*b;
    float division = a/b;

        cout << "sum = " << sum << endl;
        cout << "subtraction (a-b) = " << subtraction << endl;
        cout << "product = " << multiplication << endl;
        
        if(b!=0) {
            cout << "division (a/b) = " << division << endl;
        } else {
            cout << "division = Undefined" << endl;
        }
        

    return 0;
}
// use this command "g++ -o code calculator.cpp && code.exe" in terminal in cmd prompt to use calculator.