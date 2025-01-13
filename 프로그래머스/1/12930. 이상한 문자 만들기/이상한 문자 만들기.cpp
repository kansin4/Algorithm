#include <string>
#include <cctype> // tolower 함수
using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;

    for (char c : s) {
        if (c == ' ') { 
            answer += c;
            index = 0;
        } else {
                if (index % 2 == 0) {
                answer += toupper(c);
            } else {
                answer += tolower(c);
            }
            index++;
        }
    }
    return answer;
}
