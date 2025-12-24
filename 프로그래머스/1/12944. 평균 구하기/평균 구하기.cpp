#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    int sum = 0;
    for (auto i : arr){
        sum += i;
    }
    double answer = (double)sum / arr.size();
    return answer;
}