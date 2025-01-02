#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    int small = min(a, b);
    int big = max(a, b);

    long long answer = (long long)(big - small + 1) * (small + big) / 2;
    // 가우스의 합 공식

    return answer;
}