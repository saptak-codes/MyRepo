#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "a = ";
    cin >> a;

    float b;
    cout << "b = ";
    cin >> b;

    float sum = (float) a+b;
    float subtraction = (float) a-b;
    float multiplication = (float) a*b;
    float division = (float) a/b;

        cout << "sum = " << sum << endl;
        cout << "subtraction (a-b) = " << subtraction << endl;
        cout << "product = " << multiplication << endl;
        cout << "division (a/b) = " << division << endl;

    return 0;
}
// use this command "g++ -o code calculator.cpp && code.exe" in terminal in cmd prompt to use calculator.