#include <string>

using namespace std;

bool solution(string s) {
    if (s.size() == 4 || s.size() == 6)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (!isdigit(s[i])) // string 함수 문자열이 숫자인지 판별
                return false;
        }
        return true;
    }
    return false;
}
