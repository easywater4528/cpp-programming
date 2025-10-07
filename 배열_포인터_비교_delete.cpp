
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle(); //소멸자 - 전달인자가 없고 딱 하나만 만들 수 있다

    void setRadius(int r){
        radius = r;
    }

    double getArea(){
        return 3.14 * radius * radius;
    }
};

Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
    Circle* pArray = new Circle[3]; // 객체 배열 생성
    pArray[0].setRadius(10);
    pArray[1].setRadius(20);
    pArray[2].setRadius(30);
    for (int i = 0; i < 3; i++) {
        cout << pArray[i].getArea() << '\n';
    } //이건 배열 인덱스로 부른거
    Circle* p = pArray; // 포인터 p에 배열 주소값 설정
    for (int i = 0; i < 3; i++) { //이건 포인터로 부른거
        cout << p->getArea() << '\n';
        p++; // 다음 원소의 주소로 증가
    }
    delete[] pArray; // 객체 배열 소멸 //거꾸로 소멸
}
