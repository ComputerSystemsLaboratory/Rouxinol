#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<queue>
#include<deque>
#include<map>
#include<bitset>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0;i < (n);i++)
#define repr(i, n) for(int i = (n);i >= 0;i--)
#define repf(i, m, n) for(int i = (m);i < (n);i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1;} return 0;}
int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
//////////////////////////////////////////////////


int main() {
    while (1) {
        int n, a, b;
        string s;
        cin >> n;
        if (n == 0) break;
        vector<int> sum(1e5);
        rep(i,n) {
            cin >> s;
            a = 0, b = 0;
            a += ((s[0]-'0')*10+(s[1]-'0')) * 3600;
            a += ((s[3]-'0')*10+(s[4]-'0')) * 60;
            a += (s[6]-'0')*10+(s[7]-'0');
            cin >> s;
            b += ((s[0]-'0')*10+(s[1]-'0')) * 3600;
            b += ((s[3]-'0')*10+(s[4]-'0')) * 60;
            b += (s[6]-'0')*10+(s[7]-'0');
            // cout << a << " " << b << endl;
            sum[a]++; sum[b]--;
        }
        int ans = 0, now = 0;
        rep(i,1e5) {
            now += sum[i];
            chmax(ans, now);
        }
        cout << ans << endl;
    }
    return 0;
}
