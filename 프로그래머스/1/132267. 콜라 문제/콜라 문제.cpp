#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a) {
        int getCola = (n / a) * b;  
        answer += getCola;       
        n = (n % a) + getCola;     
    }
    
    return answer;
}