#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    
    int location = it - seoul.begin();
    
    answer = "김서방은 " + to_string(location) + "에 있다";
    
    return answer;
}
