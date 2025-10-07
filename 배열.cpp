

#include<iostream>
using namespace std;

int main() {
    int n[10];
    double d[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    int i;
    for (i = 0; i < 10; i++) n[i] = i * 2;
    for (i = 0; i < 10; i++) cout << n[i] << " ";
    cout << "\n";

    double sum = 0;
    for (i = 0; i < 4; i++) {
        sum += d[i];
    }

    cout << "배열 d의 합: " << sum;
}
