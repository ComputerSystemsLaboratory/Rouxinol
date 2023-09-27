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
using namespace std;
#define MAXN 100010
#define INF 10000000000L
int n, length = 1;
long long a[MAXN];
long long dp[MAXN]; // dp[i]はi個の増加部分列が作れる時、その部分列の末尾の項の最小値を示す
int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = INF;
    }
    dp[0] = a[0];
    for (int i = 1; i < n; i++) {
        if (dp[length-1] < a[i]) {
            dp[length++] = a[i];
        } else {
            // a[i]がdp[i]のどこに収まるのかを二分探索する
            int h = length - 1, l = 0, m;
            while (h > l) {
                m = (h+l) / 2;
                if (a[i] <= dp[m]) h = m;
                else if (a[i] > dp[m]) l = m+1;
            }
            dp[l] = a[i];
        }
    }
    cout << length << endl;
    return 0;
}