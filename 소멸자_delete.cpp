

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
    int radius;
    while (true) {
        cout << "정수 반지름 입력(음수면 종료) >> ";
        cin >> radius;
        if (radius < 0) break;
        Circle* p = new Circle(radius); //동적 할당! 포인터로 만들었기때문에 포인터로만 접근
        cout << "원의 면적 >> " << p->getArea() << endl;
        delete p; //소멸자 호출
    }
}
