#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    vector<int> temp = {};
    for(int i = 0; i < b.size(); i++)
    {
        answer += a[i] * b[i];
    }
    return answer;
}