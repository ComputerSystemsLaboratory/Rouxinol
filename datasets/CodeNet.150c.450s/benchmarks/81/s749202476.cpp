#include<bits/stdc++.h>
using namespace std;

typedef long long lint;
typedef pair<int, int> P;
#define REP(i, x, n) for(int i = x ; i < n ; ++i)
#define rep(i, n) for(int i = 0 ; i < n ; ++i)
#define repr(i, n) for(int i = n - 1 ; i >= 0 ; --i)
#define ALL(x) (x).begin(), (x).end()
#define SORT(x) sort((x).begin(), (x).end())

const int IINF = 1e9 + 10;
const long long LLINF = (long long)1e18 + 10;
const long long MOD = (long long)1e9 + 7;
const int dx4[] = {1, 0, -1, 0}, dy4[] = {0, 1, 0, -1};
const int dx8[] = {1, 1, 0, -1, -1, -1, 0, 1}, dy8[] = {0, -1, -1, -1, 0, 1, 1, 1};
const double EPS = 1e-8;

int main(){
    int n;
    while(cin >> n, n){
        int dis[10][10];
        fill(dis[0], dis[10], IINF);
        rep(i, 10){
            dis[i][i] = 0;
        }
        int maxi = 0;
        rep(i, n){
            int a, b, c;
            cin >> a >> b >> c;
            dis[a][b] = c;
            dis[b][a] = c;
            maxi = max({maxi, a, b});
        }
        ++maxi;
        for(int k = 0 ; k < maxi ; ++k){
            for(int i = 0 ; i < maxi ; ++i){
                for(int j = 0 ; j < maxi ; ++j){
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
        int tmp = IINF, ans1, ans2;
        rep(i, maxi){
            int cnt = 0;
            rep(j, maxi){
                cnt += dis[i][j];
            }
            if(cnt < tmp){
                tmp = cnt;
                ans1 = i;
                ans2 = cnt;
            }
        }
        printf("%d %d\n", ans1, ans2);
    }
    return 0;
}
