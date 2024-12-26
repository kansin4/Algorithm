#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    if (arr.empty())
    {
        return 0.0;
    }

    double answer = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        answer += arr[i];
    }

    answer /= arr.size(); 
    return answer;
}