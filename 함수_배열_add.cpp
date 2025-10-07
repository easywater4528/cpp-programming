#include<iostream>
using namespace std;

int addArray(int a[], int size);
void makeDouble(int a[], int size);
void printArray(int a[], int size);

int main() {
    int n[] = { 1, 2, 3, 4, 5 };

    int sum = addArray(n, 5);
    cout << "Sum: " << sum << "\n";

    makeDouble(n, 5);
    printArray(n, 5);

}

//합 리턴
int addArray(int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

//배열 값 2배 증가
void makeDouble(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i] *= 2;
    }
}

//배열 출력 함수
void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "배열 요소 2배 출력: " << a[i] << " ";
    }
    cout << "\n";
}