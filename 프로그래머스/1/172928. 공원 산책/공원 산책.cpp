#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    int H = park.size();
    int W = park[0].size();
    
    int y = 0;
    int x = 0;
    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(park[i][j] == 'S'){
                y = i;
                x = j;
            }
        }
    }
    
    for(string route : routes){
        char dir = route[0];
        int dist = stoi(route.substr(2));
        
        int dy = 0;
        int dx = 0;
        
        if(dir == 'E') dx = 1;
        else if(dir == 'W') dx = -1;
        else if(dir == 'S') dy = 1;
        else if(dir == 'N') dy = -1;
        
        bool canMove = true;
        
        for(int step = 1; step <= dist; step++){
            int step_y = y + (dy * step);
            int step_x = x + (dx * step);
            
            if(step_y < 0 || step_y >= H || step_x < 0 || step_x >= W){
                canMove = false;
                break;
            }
            
            if(park[step_y][step_x] == 'X'){
                canMove = false;
                break;
            }
        }
        
        if(canMove){
            y += dy * dist;
            x += dx * dist;
        }
    }
    
    answer.push_back(y);
    answer.push_back(x);
    
    return answer;
}