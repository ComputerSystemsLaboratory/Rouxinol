class in{struct my_iterator{int it;const bool rev;explicit constexpr my_iterator(int it_, bool rev=false):it(it_),rev(rev){}int operator*(){return it;}bool operator!=(my_iterator& r){return it!=r.it;}void operator++(){rev?--it:++it;}};const my_iterator i,n;public:explicit constexpr in(int n):i(0),n(n){}explicit constexpr in(int i,int n):i(i,n<i),n(n){}const my_iterator& begin(){return i;}const my_iterator& end(){return n;}};

#include <bits/stdc++.h>
using namespace std;

int dp[20][20];
bool isBroken[20][20];
int dfs(int x, int y) {
    int& res = dp[y][x];
    if(res != -1) return res;
    if(y == 0 && x == 0) return 1;

    res = 0;
    if(x > 0 && !isBroken[y][x - 1])
      res += dfs(x - 1, y);
    if(y > 0 && !isBroken[y - 1][x])
      res += dfs(x, y - 1);
    return res;
}
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int a, b, n;
    while(cin >> a >> b && a) {
        cin >> n;
        memset(isBroken, 0, sizeof(isBroken));
        for(int _ : in(n)) {
            int x, y;
            cin >> x >> y;
            --x; --y;
            isBroken[y][x] = true;
        }
        memset(dp, -1, sizeof(dp));
        cout << dfs(a - 1, b - 1) << endl;
    }
    return 0;
}