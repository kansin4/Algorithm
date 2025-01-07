#include <iostream>
#include <cmath>

int solution(int left, int right)
{
    int result = 0;
    for (int num = left; num <= right; ++num)
    {

        if (static_cast<int>(sqrt(num)) * static_cast<int>(sqrt(num)) == num)
            result -= num; // 약수 개수가 홀수인 경우
        else
            result += num; // 약수 개수가 짝수인 경우
    }
    return result;
}
