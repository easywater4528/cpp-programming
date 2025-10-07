#include <iostream>
using namespace std;

int main() {
   
    cout << "이름을 입력하세요>>";
    char name[11];
    cin >> name; //공백에서 짤림. cin자체가. getline()을 쓰면 공백도 입력 가능
    cout << "이름은 " << name ;
    return 0;
}


int main() {
   
    cout << "이름을 입력하세요>>";
    char name[128];
    cin.getline(name, 128, '\n');//getline()을 쓰면 공백도 입력 가능
    cout << "이름은 " << name ;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string song("falling in love");
    string artist("jisoo lee"); //이사람 노래못하지않나여
    string singer;

    cout << song + "를 부른 가수는? " << "\n";
    cout << "힌트: " << artist[0] << "\n";
    getline(cin, singer); //getline이라는 전역함수를 사용하여 singer에 입력값을 넣음
    if (singer == artist) {
        cout << "정답입니다!" << endl;
    } else {
        cout << "틀렸습니다!" << endl;
    }
    return 0;
}