#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string str = to_string(x);
    int temp = 0;
    int result = 0;
    for(int i = 0; i < str.length(); i++)
    {
        temp += str[i]  - '0'; // 문자열을 숫자로 치환하려면 ASCII 코드값을 빼줘야 함    
    }
    
    if (temp != 0 && (x % temp == 0))
    {
        return true;
    }
    else
        return false;
}