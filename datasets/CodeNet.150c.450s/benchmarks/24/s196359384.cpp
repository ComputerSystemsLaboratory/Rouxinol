#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (1) {
        int N, M;
        cin >> N >> M;
        if (!N & !M) break;
        vector<vector<int>> score;
        for (int i = 0; i < N; i++) {
            int d, p;
            cin >> d >> p;
            vector<int> tmp;
            tmp.push_back(p);
            tmp.push_back(d);
            score.push_back(tmp);
        }
        sort(score.begin(), score.end(), greater<vector<int>>());
        int index = 0;
        while (M > 0) {
            if (score[index][1] == 0) index++;
            if (index == score.size()) break;
            if (M >= score[index][1]) {
                M -= score[index][1];
                score[index][1] = 0;
            } else {
                score[index][1] -= M;
                M = 0;
            }
        }
        int ans = 0;
        for (auto i : score) {
            ans += i[0] * i[1];
        }
        cout << ans << endl;
    }
}
