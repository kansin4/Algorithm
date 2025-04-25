#include <vector>
#include <algorithm>
#include <iostream>

int solution(std::vector<std::vector<int>> sizes) {
    int maxWidth = 0;
    int maxHeight = 0;

    for (const std::vector<int>& card : sizes) {

        int w = card[0];
        int h = card[1];

        int longer_side = std::max(w, h);
        int shorter_side = std::min(w, h);

        maxWidth = std::max(maxWidth, longer_side);
        maxHeight = std::max(maxHeight, shorter_side);
    }

    int answer = maxWidth * maxHeight;
    return answer;
}
