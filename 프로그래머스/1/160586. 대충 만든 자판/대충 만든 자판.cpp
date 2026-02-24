#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    const int INF = INT_MAX / 2; // 더할 때 오버플로우 방지용(/2)
    // 문자 -> 최소 누름 횟수 (ASCII 기준 256)
    vector<int> minPress(256, INF);

    // 1) 문자별 최소 누름 횟수 계산
    for (const string& key : keymap) {
        for (int i = 0; i < (int)key.size(); i++) {
            unsigned char c = (unsigned char)key[i]; // char가 음수가 될 수 있는 환경에서 인덱스가 깨지는 걸 방지
            minPress[c] = min(minPress[c], i + 1);
        }
    }

    // 2) targets 계산
    vector<int> answer;
    answer.reserve(targets.size());

    for (const string& t : targets) {
        long long sum = 0;
        bool ok = true;

        for (char ch : t) {
            unsigned char c = (unsigned char)ch;
            if (minPress[c] == INF) { // 해당 문자를 만들 수 없음
                ok = false;
                break;
            }
            sum += minPress[c];
        }

        answer.push_back(ok ? (int)sum : -1);
    }

    return answer;
}