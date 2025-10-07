
#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char password[20];
    cout << "Enter your password" << endl;
    while (true) {
        cout << "Password: ";
        cin >> password;
        if (strcmp(password, "C++") == 0) {
            cout << "Access granted." << endl;
            break;
        }
        else
            cout << "Access denied. Try again." << endl;
    }
    return 0;
} 
// c스타일에 문자열 사용이 가능하다! -> cstring
