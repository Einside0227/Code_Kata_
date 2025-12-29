#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int value = 0;
    while(n > 0){
        value = n % 10;
        answer.push_back(value);
        n = n / 10;
    }
    return answer;
}