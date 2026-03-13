#include <string>
#include <vector>

using namespace std;

int typeIndex(char ch) {
    static const string types = "RTCFJMAN";
    return (int)types.find(ch);             // 위치(0~7) 반환
}

char pick(const int score[26], char a, char b) {
    int sa = score[typeIndex(a)];
    int sb = score[typeIndex(b)];

    if (sa > sb) return a;
    if (sa < sb) return b;
    return (a < b) ? a : b;
}

string solution(vector<string> survey, vector<int> choices) {
    int score[26] = {0};

    for (int i = 0; i < survey.size(); i++) {
        char left = survey[i][0]; // 비동의(1~3)
        char right = survey[i][1]; // 동의 (5~7)
        int c = choices[i]; // 사용자 선택

        if (c < 4) score[typeIndex(left)] += (4 - c); // 비동의
        else if (c > 4) score[typeIndex(right)] += (c - 4); // 동의
    }

    string answer = "";
    answer += pick(score, 'R', 'T');
    answer += pick(score, 'C', 'F');
    answer += pick(score, 'J', 'M');
    answer += pick(score, 'A', 'N');
    return answer;
}