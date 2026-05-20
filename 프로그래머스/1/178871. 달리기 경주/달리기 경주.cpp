#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> rank;
    
    for(int i = 0; i < players.size(); i++){
        rank[players[i]] = i;
    }
    
    for(string calling : callings){
        int curIndex = rank[calling];
        int frontIndex = curIndex-1;
        
        string frontPlayer = players[frontIndex];
        
        swap(players[curIndex], players[frontIndex]);
        
        rank[calling] = frontIndex;
        rank[frontPlayer] = curIndex;
    }
    return players;
}