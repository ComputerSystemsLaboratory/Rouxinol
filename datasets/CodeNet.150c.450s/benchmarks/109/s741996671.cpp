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
        vector< P > train(n);
        rep(i, n){
            int h, m, s;
            scanf("%d:%d:%d", &h, &m, &s);
            train[i].first = h * 10000 + m * 100 + s;
            scanf("%d:%d:%d", &h, &m, &s);
            train[i].second = h * 10000 + m * 100 + s;
        }
        SORT(train);
        vector<bool> done(n);
        int ans = 0;
        rep(i, n){
            if(!done[i]){
                ++ans;
                done[i] = true;
                int tmp = train[i].second;
                REP(j, i + 1, n){
                    if(tmp <= train[j].first && !done[j]){
                        done[j] = true;
                        tmp = train[j].second;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
