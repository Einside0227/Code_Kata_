#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> clothes(n + 1, 1); // 기본 1벌씩

    for (int r : reserve) clothes[r]++; // 여벌 +1
    for (int l : lost)    clothes[l]--; // 도난 -1
    
    // i가 0벌이면 i-1 또는 i+1에서 빌림
    for (int i = 1; i <= n; i++) {
        if (clothes[i] == 0) {
            if (i-1 >= 1 && clothes[i-1] == 2) {
                clothes[i-1]--;
                clothes[i]++;
            } else if (i+1 <= n && clothes[i+1] == 2) {
                clothes[i+1]--;
                clothes[i]++;
            }
        }
        if (clothes[i] >= 1) answer++;
    }

    return answer;
}