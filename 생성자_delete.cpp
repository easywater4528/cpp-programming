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
    Circle* p, * q;
    p = new Circle();
    q = new  Circle(30);
    cout << p->getArea() << endl << q->getArea()<< endl; 
    //->멤버접근연산자 

    //메모리 해제
    delete p;
    delete q;
}