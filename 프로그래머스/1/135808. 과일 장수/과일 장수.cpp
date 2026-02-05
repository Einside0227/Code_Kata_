#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    sort(score.begin(), score.end(), greater<int>());

    int answer = 0;
    int cnt = score.size() / m;

    for (int i = 0; i < cnt; i++) {
        int minScore = score[(i + 1) * m - 1];
        answer += minScore * m;
    }

    return answer;
}