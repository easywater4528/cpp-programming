#include<iostream>
using namespace std;

int adder(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int n = adder(200, 500);
    cout << "200과 500의 합은 : " << n << "입니다. \n";

    int a, b;
    cout << "두 정수를 입력하세요 : ";
    cin >> a >> b;
    n = adder(a,b);
    cout << a << "과 " << b << "의 합은 : " << n << "입니다. \n";
}