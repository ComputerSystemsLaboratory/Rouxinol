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
#define MAXN 110
typedef long long ll;

int a[MAXN];

int main(void) {
    int n;
    while (cin >> n) a[n]++;
    int ma = 0;
    for (int i = 0; i <= 100; i++) ma = max(ma, a[i]);
    vector<int> ans;
    for (int i = 0; i <= 100; i++) {
        if (a[i] == ma) ans.push_back(i);
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}