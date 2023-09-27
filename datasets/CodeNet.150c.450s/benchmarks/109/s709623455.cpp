#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int table[100000];

int main(void) {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        for (int i = 0; i < 100000; i++) table[i] = 0;
        for (int i = 0; i < n; i++) {
            string s, t;
            cin >> s >> t;
            // 最初の時間を求める
            {
                int h = (s[0]-'0') * 10 + (s[1]-'0');
                int m = (s[3]-'0') * 10 + (s[4]-'0');
                int ss = (s[6]-'0') * 10 + (s[7]-'0');
                table[h*3600+m*60+ss]++;
            }
            // 到着の時間を求める
            {
                int h = (t[0]-'0') * 10 + (t[1]-'0');
                int m = (t[3]-'0') * 10 + (t[4]-'0');
                int ss = (t[6]-'0') * 10 + (t[7]-'0');
                table[h*3600+m*60+ss]--;
            }
        }
        int cur = 0, ans = 0;
        for (int i = 0; i < 100000; i++) {
            cur += table[i];
            ans = max(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}