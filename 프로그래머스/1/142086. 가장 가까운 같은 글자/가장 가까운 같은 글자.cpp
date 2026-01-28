#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<char> seen;

    for (int i = 0; i < s.size(); i++) {
        int dist = -1;

        for (int j = seen.size() - 1; j >= 0; j--) {
            if (seen[j] == s[i]) {
                dist = i - j;
                break;
            }
        }

        answer.push_back(dist);
        seen.push_back(s[i]);
    }
    return answer;
}