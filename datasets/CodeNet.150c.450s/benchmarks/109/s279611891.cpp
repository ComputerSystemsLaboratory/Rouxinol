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
    int n;
    while (cin >> n, n) {
        vector<int> line(24*60*60 + 1, 0);
        rep(i, n) {
            int h, m, n;
            scanf("%d:%d:%d", &h, &m, &n);
            m += h * 60;
            n += m * 60;
            line[n]++;
            scanf("%d:%d:%d", &h, &m, &n);
            m += h * 60;
            n += m * 60;
            line[n]--;
        }
        int ret = 0;
        rep(i, 24*60*60) {
            line[i+1] += line[i];
            ret = max(ret, line[i]);
        }
        cout << ret << endl;
    }
    return 0;
}