#include <string>
#include <vector>
using namespace std;

long long solution(long long n) {
    long long answer = 1;
    for (; answer * answer <= n; answer++) {
        if (answer * answer == n) {
            return (answer + 1) * (answer + 1);
        }
    }
    return -1;
}
