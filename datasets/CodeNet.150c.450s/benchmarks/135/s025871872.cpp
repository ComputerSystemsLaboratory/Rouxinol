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
#define MAX 1600

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int N, M;
int x[MAX], y[MAX];

int main(void) {
    while (1) {
        cin >> N >> M;
        if (N == 0 && M == 0) break;
        x[0] = y[0] = 0;
        for (int i = 1; i <= N; i++) {
            int h;
            cin >> h;
            y[i] = y[i-1] + h;
        }
        for (int i = 1; i <= M; i++) {
            int w;
            cin >> w;
            x[i] = x[i-1] + w;
        }
        vector<int> all;
        for (int i = 0; i <= N; i++) {
            for (int j = i+1; j <= N; j++) {
                all.push_back(y[j]-y[i]);
            }
        }
        sort(all.begin(), all.end());
        int ans = 0;
        for (int i = 0; i <= M; i++) {
            for (int j = i+1; j <= M; j++) {
                int len = x[j] - x[i];
                ans += upper_bound(all.begin(), all.end(), len) - lower_bound(all.begin(), all.end(), len);
            }
        }
        cout << ans << endl;
    }
    return 0;
}