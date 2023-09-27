#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
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
        vector<int> data(n);
        rep(i, n) {
            cin >> data[i];
        }
        sort(data.begin(), data.end());
        int ans = 1010001000;
        rep(i, n-1) {
            ans = min(ans, data[i+1] - data[i]);
        }
        cout << ans << endl;
    }
    return 0;
}