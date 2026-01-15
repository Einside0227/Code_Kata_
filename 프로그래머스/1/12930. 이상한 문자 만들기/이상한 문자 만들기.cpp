#include <string>
using namespace std;

string solution(string s) {
    string answer = s;
    int index = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (answer[i] == ' ') {
            index = 0;
            continue;
        }
        else
            answer[i] = index % 2 == 0 ? toupper(answer[i]) : tolower(answer[i]);
        
        index++;
    }
    return answer;
}