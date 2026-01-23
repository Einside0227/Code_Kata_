#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int c_n;

bool cmp(const string& a, const string& b) {
    if (a[c_n] == b[c_n]) return a < b;
    return a[c_n] < b[c_n];
}

vector<string> solution(vector<string> strings, int n) {  
    c_n = n;
    sort(strings.begin(), strings.end(), cmp);
    
    return strings;
}