#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int idx = 0; idx < commands.size(); idx++){
        int i = commands[idx][0]; // 2
        int j = commands[idx][1]; // 5
        int k = commands[idx][2]; // 3
        
        vector<int> temp(array.begin() + (i-1), array.begin() + j);
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[k-1]);
    }
    return answer;
}