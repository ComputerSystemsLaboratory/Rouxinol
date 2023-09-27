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
int w, n, a[32], b[32], ans[32];
int main(void) {
    cin >> w;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d,%d", a+i, b+i);
    }
    for (int i = 1; i <= w; i++) {
        int now = i;
        for (int j = 0; j < n; j++) {
            if (now == a[j]) now = b[j];
            else if (now == b[j]) now = a[j];
        }
        ans[now] = i;
    }
    for (int i = 1; i <= w; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}