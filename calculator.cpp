#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "a = ";
    cin >> a;

    int b;
    cout << "b = ";
    cin >> b;

    int sum = a+b;
    int subtraction = a-b;
    int multiplication = a*b;
    float division = (float) a/b;

        cout << "sum = " << sum << endl;
        cout << "subtraction (a-b) = " << subtraction << endl;
        cout << "product = " << multiplication << endl;
        cout << "division (a/b) = " << division << endl;

    return 0;
}
// use this command "g++ -o code calculator.cpp && code.exe" in terminal in cmd prompt to use calculator.