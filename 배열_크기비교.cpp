#include <iostream>
#include <string>
using namespace std;


int main() {
    string names[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter name: ";
        getline(cin, names[i], '\n'); //엔터로 하나씩 다 받겠다는뜻
    }
    string latter = names[0];
    for (int i = 1; i < 5; i++) {
        if (latter < names[i]) { //latter이 앞에있으면 true 문자열을 그냥 이렇게 크기연산자로 구분할 수 있다!
            latter = names[i];
        }
    }
    cout << "The latter name is: " << latter << endl;
}


