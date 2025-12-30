#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    for(long long x = 1; x*x <= n; x++){
        if(x*x == n){
            return (x+1)*(x+1);
        }
    }
    return -1;
}