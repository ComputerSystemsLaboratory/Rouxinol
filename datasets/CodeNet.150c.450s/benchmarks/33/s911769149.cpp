#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
//#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
//#include<list>
#include<queue>
#include<deque>
#include<algorithm>
//#include<numeric>
#include<utility>
#include<complex>
//#include<memory>
#include<functional>
#include<cassert>
#include<set>
#include<stack>

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

int calc(int s, int p) {
    return (100+p)*s/100;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int x, y, s;
    while (cin >> x >> y >> s) {
        if (x==0 && y==0 && s==0) break;
        int ans = 0;
        for (int s1 = 1; s1 < s; s1++) for (int s2 = 1; s2 < s; s2++) {
            if (calc(s1, x)+calc(s2, x) == s) {
                ans = max(ans, calc(s1, y)+calc(s2, y));
            }
        }
        cout << ans << endl;
    }
    return 0;
}