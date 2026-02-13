#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> sounds = {"aya", "ye", "woo", "ma"};
    
    for (string w : babbling) {
        bool ok = true;

        for (string t : sounds) {
            if (w.find(t + t) != string::npos) {
                ok = false; // 연속 발음 체크
                break;
            }
            while (w.find(t) != string::npos) // w에서 s를 찾았다면
                w.replace(w.find(t), t.size(), " "); // 찾은 단어를 빈 문자열로 바꿈  
        }

        if (!ok) continue; // 연속 발음이면 카운트 X

        for (char c : w) {
            if (c != ' ') { 
                ok = false; // 남는 글자 있으면 실패
                break; 
            }
        }
        
        if (ok) answer++;
    }
    
    return answer;
}