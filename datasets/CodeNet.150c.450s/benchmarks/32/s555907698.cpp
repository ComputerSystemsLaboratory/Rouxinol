#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
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
    int m, min, max;
    while (cin >> m >> min >> max, m) {
        vector<int> data(200, 0);
        rep(i, m) {
            cin >> data[i];
        }
        int ans = 0;
        int ret = min;
        for (int i = min; i <= max; i++) {
            if (ans <= data[i-1] - data[i]) {
                ans = data[i-1] - data[i];
                ret = i;
            }
        }
        cout << ret << endl;
    }
    return 0;
}