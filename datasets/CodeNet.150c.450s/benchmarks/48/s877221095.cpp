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
        int ans = INF;
        for (int i = 0; i*i*i <= n; i++) {
            for (int j = 0; i*i*i + j*j <= n; j++) {
                int k = n - (i*i*i + j*j);
                ans = min(ans, i+j+k);
            }
        }
        cout << ans << endl;
    }
    return 0;
}