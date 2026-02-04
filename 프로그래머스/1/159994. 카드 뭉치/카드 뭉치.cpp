#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int i = 0;
    int j = 0;

    for (int g = 0; g < goal.size(); g++) {
        if (i < cards1.size() && cards1[i] == goal[g]) {
            i++;
        }
        else if (j < cards2.size() && cards2[j] == goal[g]) {
            j++;
        }
        else {
            return "No";
        }
    }

    return "Yes";
}