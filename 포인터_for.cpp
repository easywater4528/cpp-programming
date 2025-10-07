
#include <iostream>
using namespace std;

int main() {
    cout << "20221322 이지수";
    cout << "\n";

    int n[10];
    int i , * p;
    for (i = 0; i < 10; i++)
        *(n + i) = i * 3;

    p = n;
    for (i = 0; i < 10; i++)
        cout << *(p + i) << ' ';
    cout << "\n";

    for (i = 0; i < 10; i++) {
        *p = *p + 2;
        p++;
    }

    for (i = 0; i < 10; i++)
        cout << n[i] << ' ';
    cout << "\n";

    return 0;
}

// 입력버퍼와 매칭변수 잘 해줘야함.
// p21 string_length 이런거 c에서는 null문자 없으면 동작안함.