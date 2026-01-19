#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.size();
    
    long long pNum = stoll(p);
    
    for(int i = 0; i <= t.size() - len; i++){
        string part = t.substr(i, len);
        long long partNum = stoll(part);
        
        if (partNum <= pNum) answer++;
    }
    return answer;
}