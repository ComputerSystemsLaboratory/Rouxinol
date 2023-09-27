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

int s[101];

int main(void) {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int sum = 0;
        int ma = 0, mi = INF;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            ma = max(ma, s[i]);
            mi = min(mi, s[i]);
            sum += s[i];
        }
        sum -= (ma + mi);
        cout << sum / (n-2) << endl;
    }
    return 0;
}