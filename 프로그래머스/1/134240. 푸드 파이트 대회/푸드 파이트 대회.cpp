#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string left = "";

    for (int i = 1; i < food.size(); i++) {
        for (int k = 0; k < food[i] / 2; k++) {
            left += to_string(i);
        }
    }

    string right = "";
    for(int j = left.size()-1; j >= 0; j--){
        right += left[j];
    }

    return left + "0" + right;
}