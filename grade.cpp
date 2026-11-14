#include <iostream>
using namespace std;
int main() {

    int marks;
    cout << "marks = ";
    cin >> marks;

    if(marks>100 || marks<0) {
        cout << "Invalid Marks";
    }else if(marks>=90 && marks <=100) {
        cout << "grade = A\nPass";
    } else if(marks<90 && marks>=80) {
        cout << "grade = B\nPass";
    } else if(marks<80 && marks>=65) {
        cout << "grade = C\nPass";
    } else if(marks<65 && marks>=50) {
        cout << "grade = D\nPass";
    } else {
        cout << "grade = F\nFail";
    }

    return 0;
}