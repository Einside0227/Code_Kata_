#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero = 0;
    int match = 0;
    
    for(int l : lottos){
        if(l == 0) zero++;
        else{
            for(int w : win_nums){
                if(l == w) match++;
            }
        }
    }
    
    int rank[7] = {6, 6, 5, 4, 3, 2, 1};
    
    answer.push_back(rank[match+zero]);
    answer.push_back(rank[match]);
    

    return answer;
}