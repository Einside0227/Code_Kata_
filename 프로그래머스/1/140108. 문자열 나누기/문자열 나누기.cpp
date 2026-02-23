#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x = 0; 
    int same = 0, diff = 0;

    for (char c : s) {
        if (same == 0 && diff == 0) { // 첫 글자
            x = c;
        }
        
        // 첫 글자와 다음 글자가
        if (c == x) same++; // 같을 때
        else diff++; // 다를 때

        // 처음으로 같아지는 순간 분리
        if (same == diff) {
            answer++;
            same = diff = 0; // 0으로 초기화
        }
    }

    // 끝났는데 카운트가 남아있다면 마지막 조각
    if (same != 0 || diff != 0) answer++;
    
    return answer;
}