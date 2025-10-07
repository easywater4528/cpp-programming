// cpp0929
// runtime error 개발자 + 고객도 에러를 느낌 -> delelte를 사용하면 런타임이 남. 안좋은것임
// compiletime error 

#include <iostream>
using namespace std;
int main() {
    cout << "입력할 정수의 개수는?";
    int n;
    cin >> n; // 정수의 개수 입력
    if (n <= 0) return 0;

    int* p = new int[n]; // n 개의 정수 배열 동적 할당
    if (!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0; //혹시모르니 또 한번 에러처리
    }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 정수: "; // 프롬프트 출력
        cin >> p[i]; // 키보드로부터 정수 입력
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += p[i];
    cout << "평균 = " << sum / n << endl;
    cout << "합 = " << sum << endl;
    delete[] p; // 배열 메모리 반환 !! 빼먹지 말아라!! 시허문제윔
}

// -> 몇개입력할지모르니까 동적할당을 함! 모를때는 막 천개 메모리 가지고 있는데 딱  int* p = new int[n]; // n 개의 정수 배열 동적 할당
//  이거를 통해서 해주니까 메모리 낭비도 없음!
