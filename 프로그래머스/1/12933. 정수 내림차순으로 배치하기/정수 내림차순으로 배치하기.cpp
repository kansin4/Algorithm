#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str = to_string(n); // 문자열 치환
    sort(str.begin(), str.end(), greater<char>()); // sort 함수, 시작. 끝. 내림차순
    
    return stoll(str);
}