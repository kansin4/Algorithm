#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer(2);
    
    for(int i = 1; i <= m; i++)
    {
        if(n % i == 0 && m % i == 0)
            answer[0] = i;
    }
    
    answer[1] = (n * m) / answer[0];
    
    
    return answer;
}