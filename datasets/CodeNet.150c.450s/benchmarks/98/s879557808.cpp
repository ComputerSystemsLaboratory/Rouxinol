#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

const int INF = (1 << 28);

int main(void) {
    int n, m;
    while (cin >> n >> m, n) {

        vector<int> taro(n);
        for (int i = 0; i < n; i++) {
            cin >> taro[i];
        }
        vector<int> hanako(m);
        for (int j = 0; j < m; j++) {
            cin >> hanako[j];
        }

        int t_sum = accumulate(taro.begin(), taro.end(), 0);
        int h_sum = accumulate(hanako.begin(), hanako.end(), 0);

        int ans = INF;
        int t_ans, h_ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int ts = t_sum-taro[i]+hanako[j];
                int hs = h_sum-hanako[j]+taro[i];

                if (ts == hs && ans > ts) {
                    ans = ts;
                    t_ans = taro[i];
                    h_ans = hanako[j];
                }
            }
        }

        if (ans != INF) {
            cout << t_ans << " " << h_ans << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}