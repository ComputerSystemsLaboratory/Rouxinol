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
const int MAXN = 100010;

string name[MAXN];
int t[MAXN];

int main(void) {
    int n, q, time = 0;
    cin >> n >> q;
    queue<int> que;
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> t[i];
        que.push(i);
    }
    while (que.size()) {
        int now = que.front();
        que.pop();
        if (t[now] > q) {
            t[now] -= q;
            que.push(now);
            time += q;
        } else {
            cout << name[now] << " " << time + t[now] << endl;
            time += t[now];
        }
    }
    return 0;
}