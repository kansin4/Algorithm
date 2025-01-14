#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long count = num;

    if (num == 1) {
        return 0;
    }

    while (count != 1)
    {
        if (count % 2 == 0) // 짝수면
        {
            count /= 2;
        }
        else // 홀수면
        {
            count = count * 3 + 1;
        }
        answer++;

        if (answer >= 500) {
            return -1;
        }
    }

    return answer;
}
