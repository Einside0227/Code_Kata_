#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    vector<int> st;
    st.reserve(ingredient.size());

    int answer = 0;

    for (int x : ingredient) {
        st.push_back(x);
        
        int n = st.size();
        if (n >= 4) {
            if (st[n-4] == 1 && st[n-3] == 2 && st[n-2] == 3 && st[n-1] == 1) {
                st.resize(n - 4); // 사이즈를 줄여서 마지막 4개 원소 삭제
                answer++;
            }
        }
    }

    return answer;
}