#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>

using namespace std;

#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back

typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;

int main()
{
    int n, m;
    while(cin >> n >> m, n|m){
        vi taro;
        rep(i, n){
            int input;
            cin >> input;
            taro.pb(input);
        }
        vi hanako;
        rep(i, m){
            int input;
            cin >> input;
            hanako.pb(input);
        }
        int ans1 = 100, ans2 = 100;
        rep(i, n){
            rep(j, m){
                swap(taro[i], hanako[j]);
                // cout << ans1 << " " << ans2 << " " << taro[i] << " " << taro[j] << endl;
                if(accumulate(ALL(taro), 0) == accumulate(ALL(hanako), 0) && ans1+ans2 > taro[i]+hanako[j]){
                    ans2 = taro[i];
                    ans1 = hanako[j];
                }
                swap(taro[i], hanako[j]);
            }
        }
        if (ans1 == 100 && ans2 == 100) cout << -1 << endl;
        else cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}