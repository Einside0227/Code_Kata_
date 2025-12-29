#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int min = 0;
    for(int x = 1; x <= n; x++){
        if(n % x == 1){
            min = x;
            break;
        }
    }
    return min;
}