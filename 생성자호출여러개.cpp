
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int length);
    bool isSquare();

};

Rectangle::Rectangle() : Rectangle(1){} //갑 에서 실제 할당이 일어남
Rectangle::Rectangle(int s) : Rectangle(s,s) {} //을
Rectangle::Rectangle(int w, int h) : width(w), height(h) {} //병
bool Rectangle::isSquare() { 
    if(width == height) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    Rectangle rect1; //기본 생성자 호출
    Rectangle rect2(3, 5); //두 번째 생성자 호출 두개짜리
    Rectangle rect3(3); //세 번째 생성자 호출 한개짜리
    if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
    if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
