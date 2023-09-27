#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cctype>

using namespace std;
#define N 100
#define INF 10000
int main()
{
    int n, m, s;
    int hanako[N];
    int taro[N];
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            cin >> taro[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> hanako[i];
        }
        int sum_taro = 0;
        int sum_hanako = 0;
        for (int i = 0; i < n; i++) {
            sum_taro += taro[i];
        }
        for (int i = 0; i < m; i++) {
            sum_hanako += hanako[i];
        }
        int ans_t = INF, ans_h = INF;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int tmp1 = sum_taro + hanako[j] - taro[i];
                int tmp2 = sum_hanako + taro[i] - hanako[j];
                if (tmp1 != tmp2) {
                    continue;
                }
                if (taro[i] + hanako[j] < ans_t + ans_h) {
                    ans_t = taro[i];
                    ans_h = hanako[j];
                }
            }
        }
        if (ans_t == INF) {
            cout << -1 << endl;
        }
        else {
            cout << ans_t << " " << ans_h << endl;
        }
    }
    return 0;
}