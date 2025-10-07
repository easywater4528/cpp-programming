#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle donut;
    Circle pizza(30);

    cout << donut.getArea() << endl;

    Circle* pC; //circle 클래스 타입의 포인터 변수 선언
    pC = &donut; //도넛에 메모리 주소 저장
    cout << pC->getArea() << endl; //포인터로 도넛의 넓이 출력
    cout << (*pC).getArea() << endl; //도넛 객체니까 점 찍을 수 있음

    pC = &pizza; //도넛에 메모리 주소 저장
    cout << pC->getArea() << endl; //포인터로 도넛의 넓이 출력
    cout << (*pC).getArea() << endl; //도넛 객체니까 점 찍을 수 있음
}