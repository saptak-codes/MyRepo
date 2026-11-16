#include <iostream>
using namespace std;

int main() {
    
    int N;
    cout << "N = ";
    cin >> N;
    int sumDiv3 = 0;

    for(int i=1;i<=N;i++) {
        if(i%3 == 0) {
            sumDiv3+=i;
        }
    }
    cout << sumDiv3;

    return 0;
}