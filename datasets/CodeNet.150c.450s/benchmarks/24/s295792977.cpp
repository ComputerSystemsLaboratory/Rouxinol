#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

#define INF 1010001000
#define EPS 1e-10
#define rep(i, N) for (int i = 0; i < N; i++)
#define pb push_back

typedef pair<int, int> i_i;
typedef long long int llong;
typedef pair<llong, llong> ll_ll;
typedef struct edge {int f, t;}Edge;


int main()
{
    int n, m;
    while (cin >> n >> m, n) {
        priority_queue<i_i > pq;
        rep(i, n) {
            int a, b;
            cin >> a >> b;
            pq.push(i_i(b, a));
        }
        int ans = 0;
        while (m && !pq.empty()) {
            i_i tmp = pq.top(); pq.pop();
            if (m >= tmp.second) {
                m -= tmp.second;
            } else {
                ans += tmp.first * (tmp.second - m);
                m = 0;
            }
        }
        while (!pq.empty()) {
            ans += pq.top().first * pq.top().second; pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}