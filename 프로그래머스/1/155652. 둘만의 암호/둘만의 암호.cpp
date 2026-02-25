#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    bool blocked[26] = {false};
    for (char c : skip) {
        blocked[c - 'a'] = true;
    }

    string answer = s;

    for (int i = 0; i < (int)s.size(); i++) {
        char cur = s[i];
        int steps = 0;

        while (steps < index) {
            // 다음 알파벳으로 이동 (z 다음은 a)
            cur = (cur == 'z') ? 'a' : (char)(cur + 1);

            // skip 문자가 아니면 카운트
            if (!blocked[cur - 'a']) {
                steps++;
            }
        }

        answer[i] = cur;
    }

    return answer;
}