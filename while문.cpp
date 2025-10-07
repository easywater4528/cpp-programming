#include<iostream>
using namespace std;

int main() {
    int a;
    while (true) { //무한루프
        cout << "정수입력 >> ";
        cin >> a;
        if (a == 0) break;
        if (a % 3 != 0) {
            cout << "no" << "\n";
            continue;
        }
        if (a % 3 == 0) {
            cout << "yes" << "\n";
            continue;
        }
    }
}