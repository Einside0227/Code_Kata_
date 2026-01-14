#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    int gcd_val = 1;
    int lcm_val = 0;
    
    for(int i = 1; i <= (n < m ? n : m); i++){
        if(n % i == 0 && m % i == 0){
            gcd_val = i;
        }
    }
    lcm_val = (n * m) / gcd_val;
    
    return {gcd_val, lcm_val};
}