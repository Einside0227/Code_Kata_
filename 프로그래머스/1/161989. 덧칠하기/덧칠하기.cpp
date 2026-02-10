#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int end = 0;
    
    for (int s : section) {
        if (s > end) {
            answer++;
            end = s + m - 1;
        }
    }
        
    return answer;
}