#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> p1 = {1,2,3,4,5};
    vector<int> p2 = {2,1,2,3,2,4,2,5};
    vector<int> p3 = {3,3,1,1,2,2,4,4,5,5};
    
    int c1 = 0, c2 = 0, c3 = 0;
    
    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == p1[i % p1.size()]) c1++;
        if (answers[i] == p2[i % p2.size()]) c2++;
        if (answers[i] == p3[i % p3.size()]) c3++;
    }
    
    int mx = max({c1, c2, c3});
    if (c1 == mx) answer.push_back(1);
    if (c2 == mx) answer.push_back(2);
    if (c3 == mx) answer.push_back(3);
    
    return answer;
}