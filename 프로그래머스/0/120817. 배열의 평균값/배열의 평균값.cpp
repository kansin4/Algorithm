#include <iostream>
#include <vector>
using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    if (numbers.empty())
    {
        return 0;
    }

    for (size_t i = 0; i < numbers.size(); i++) { // 범위 수정
        answer += numbers[i];
    }

    answer /= numbers.size(); // 평균 계산
    return answer;
}
