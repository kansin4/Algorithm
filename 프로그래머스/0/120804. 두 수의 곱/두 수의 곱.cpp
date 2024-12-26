#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;                        // 사용자로부터 입력 받음
    cout << "Result: " << solution(num1, num2); // solution 함수 호출 및 결과 출력
    return 0;
}
