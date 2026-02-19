#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    // 숫자 개수 세기
    int cntX[10] = {0};
    int cntY[10] = {0};

    for (char c : X) cntX[c - '0']++;
    for (char c : Y) cntY[c - '0']++;
    
    string answer = "";
    
    for (int d = 9; d >= 0; d--) {
        int t = min(cntX[d], cntY[d]);
        answer.append(t, char('0' + d)); // 숫자 d를 t번
    }
    
    if (answer.empty()) return "-1";
    if (answer[0] == '0') return "0";
    
    return answer;
}