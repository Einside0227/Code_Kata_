#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_width = 0;
    int max_height = 0; 
    
    for(const auto& size:sizes){
        int width = max(size[0], size[1]);
        int height = min(size[0], size[1]);
        
        max_width = max(max_width, width);
        max_height = max(max_height, height);
    }
    return max_width*max_height;
}