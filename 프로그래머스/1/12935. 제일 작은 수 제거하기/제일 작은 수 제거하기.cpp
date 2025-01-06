#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() <= 1)
        return {-1};
    auto answer = min_element(arr.begin(), arr.end());
    
    arr.erase(answer);
    
    return arr;
}