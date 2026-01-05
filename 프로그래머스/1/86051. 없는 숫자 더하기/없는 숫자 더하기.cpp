#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    bool s[10] = {false};
    int sum = 0;
    
    for(int x : numbers){
        s[x] = true;
    }
    
    for(int i = 0; i <= 9; i++){
        if(!s[i]){
            sum+=i;
        }
    }
    return sum;
}