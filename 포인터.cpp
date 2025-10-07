// int *p = p라는 변수가 포인터라는것을 강조
// int* p = 인티져 포인터라는것을 강조
// int * p = 이상한사람

#include <iostream>
using namespace std;

int main() {
    int n = 10, m;
    char c = 'A';
    double d;

    int* p = &n;
    char* q = &c;
    double* r = &d;

    *p = 25; //간접참조 연산자 사용. 변수처럼 사용 가능
    *q = 'B'; 
    *r = 3.14;
    m = *p + 10;

    cout << n << "," << *p << "\n";
    cout << c << "," << *q << "\n";
    cout << d << "," << *r << "\n";
    cout << m << "\n";
    return 0;
}

// --------------------
// syntatic sugar 문법 사탕 *(n+10) = n[10] c의 배열은 포인터 연산과 똑같다.
// int n[10] == &n[0] == n
// void * -> 순수한 주소값! 아무거나 가르킬수 있음! 4학년때 배움
// int func(double a, float b);
// int (*pf)(double, float);
// pf = func;
// pf(3.14,4.0)
// --------------------
// p44
// 배열도 포인터와 똑같아서 *(n+5) 쓸 수 잇다.

// n은 항상 배열 첫번째만 가르킴. 옮길 수 업뜸

// 중간 계산과정 보고싶지않고 true false만 보고싶다! p46
