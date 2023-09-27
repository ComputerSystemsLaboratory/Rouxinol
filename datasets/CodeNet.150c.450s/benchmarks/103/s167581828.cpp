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
#define INF 100000000
typedef long long ll;

int main(void) {
    int n, s;
    while (1) {
        cin >> n >> s;
        if (n == 0 && s == 0) break;
        int ans = 0;
        for (int i = 0; i < (1 << 10); i++) {
            int num = 0, sum = 0;
            for (int j = 0; j <= 9; j++) {
                if ((i >> j) % 2 == 1) {
                    num++;
                    sum += j;
                }
            }
            if (num == n && sum == s) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}