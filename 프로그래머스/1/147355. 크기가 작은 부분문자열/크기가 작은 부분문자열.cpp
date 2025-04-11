#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int p_len = p.length();
    int t_len = t.length();

    unsigned long long p_val;
    try {
        p_val = stoull(p);
    } catch (const out_of_range& oor) {
        p_val = stoull(p);
    }

    for (int i = 0; i <= t_len - p_len; ++i) {
        string sub = t.substr(i, p_len);
        unsigned long long sub_val;
         try {
            sub_val = stoull(sub);
        } catch (const out_of_range& oor) {
  
             sub_val = stoull(sub);
        }
        if (sub_val <= p_val) {
            answer++;
        }
    }
    return answer;
}