#include <iostream>
using namespace std;
int main() {

int M;
int E;
int S;
int H;
int B;

cout << "Mathematics marks = ";
cin >> M;

cout << "English marks = ";
cin >> E;

cout << "Science marks = ";
cin >> S;

cout << "History marks = ";
cin >> H;

cout << "Bengali marks = ";
cin >> B;
if(M < 0 || M>100 || E<0 ||E>100 || S<0 ||S>100 ||H<0 || H>100 || B<0 || B>100) {
        cout << "Invalid marks" << endl;
} else {cout << "Total Marks Obtained = " << M+E+S+H+B << endl;
cout << "Total Marks = 500\n";

float percentage = (float)(M+E+S+H+B)/5;
cout << "Percentage = " << percentage << "%" << endl;

int marks =  M+E+S+H+B;
    if(marks<=500 && marks>=450) {
        cout << "Grade = A\n" << "Pass\n" << "Excellent";
    } else if(marks<450 && marks>=400) {
        cout << "Grade = B\n" << "Pass\n" << "Good";
    } else if(marks<400 && marks>= 350) {
        cout << "Grade = C\n" << "Pass\n" << "Decent Performance";
    } else if(marks<350 && marks>=300) {
        cout << "Grade = D\n" << "Pass\n" << "Poor Performance";
    } else {
        cout << "Grade = F\n" << "Fail\n" << "Very Poor Performance";
    } }
    return 0;
}