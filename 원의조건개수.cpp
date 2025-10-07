
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    ~Circle() {}

    void setRadius(int r){
        radius = r;
    }
    double getArea(){
        return 3.14 * radius * radius;
    }
};

Circle::Circle() {
    radius = 1;
}

int main() {
    cout << "20221322 이지수" << endl;
    cout << "생성하고자 하는 원의 개수? ";
    int n, radius;
    cin >> n;
    Circle* pArray = new Circle[n];

    for (int i = 0; i < n; i++) {
        cout << "원" << i + 1 << ": "; 
        cin >> radius; 
        pArray[i].setRadius(radius);
    } //배열 할당

    int count = 0; 
    Circle* p = pArray;

    for (int i = 0; i < n; i++) {
        cout << p->getArea() << ' '; 
        if (p->getArea() >= 100 && p->getArea() <= 200)
            count++;
        p++;
    } //포인터 할당
    
    cout << endl << "면적이 100에서 200 사이인 원의 개수는 "
        << count << endl;
    delete[] pArray;
}

// --------------교수님코드
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    ~Circle() {}

    void setRadius(int r){
        radius = r;
    }
    double getArea(){
        return 3.14 * radius * radius;
    }
};

Circle::Circle() {
    radius = 1;
}

int main() {
    cout << "20221322 이지수" << endl;
    cout << "생성하고자 하는 원의 개수? ";
    int cnt, radius;
    cin >> cnt;
    if (cnt <= 0) return 0;
    Circle* pC = new Circle[cnt];
    int area_cnt = 0;
    cout << "원의 반지름 입력 >> ";
    int r;
    for(int i=0; i < cnt; i++) {
        cin >> r;
        pC[i].setRadius(r);
        if (pC[i].getArea() >= 100 && pC[i].getArea() <= 200) 
            area_cnt++;
    }
    cout << "면적이 100 이상 200 이하인 원의 개수는 " << area_cnt << "개 입니다." << endl;
    delete[] pC;
}
