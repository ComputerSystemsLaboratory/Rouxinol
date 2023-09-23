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
#define MAXN 5010
int main(void) {
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        int a[MAXN], sum[MAXN];
        for (int i = 0; i < n; i++) {
            a[i] = 0;
            sum[i] = 0;
        }
        sum[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum[i] = sum[i-1] + a[i];
        }
        int ret = a[1];
        for (int i = 0; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                ret = max(sum[j]-sum[i], ret);
            }
        }
        cout << ret << endl;
    }
    return 0;
}