#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int sign = 1;
    int index = 0;
    int result = 0;

    if (s[0] == '-'){
        sign = -1;
        index = 1;
    }
    else if (s[0] == '+'){
        index = 1;
    }

    for (int i = index; i < s.length(); i++){
        result = result * 10 + (s[i] - '0');
    }

    return sign * result;
}