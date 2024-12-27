#include <string>
#include <vector>
using namespace std;

vector<int> solution(long long n) {
    string str = to_string(n); // 문자열로 치환
    
    vector<int> answer(str.size()); // 배열의 크기 설정 .size

    for (int i = 0; i < str.size(); i++)
    {
        answer[i] = str[str.size() - 1 - i] - '0'; // '0'는 문자열을 숫자로 치환할때 ASCII 코드 값'48'을 빼주는 작업
    }

    return answer;
}
