#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string s) {
    unordered_map<string, char> mp = {
        {"zero",'0'}, {"one",'1'}, {"two",'2'}, {"three",'3'}, {"four",'4'},
        {"five",'5'}, {"six",'6'}, {"seven",'7'}, {"eight",'8'}, {"nine",'9'}
    };

    string tmp = "";    
    string result = "";  

    for (char c : s) {
        if (c >= '0' && c <= '9') {
            result += c;
        }
        else {
            tmp += c;

            if (mp.count(tmp)) {
                result += mp[tmp];
                tmp = ""; 
            }
        }
    }

    return stoi(result);
}