#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle(); 
    Circle(int r); //radius를 초기화하고 싶어서 int r을 받는 생성자 추가
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << "인 원을 생성합니다." << endl;
}

Circle::Circle(int r) {
    radius = r; //1대신에 r을 넣음
    cout << "반지름 " << radius << "인 원을 생성합니다." << endl;
}


double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
    return 0;
}