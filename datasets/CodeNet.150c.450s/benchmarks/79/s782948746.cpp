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
    int n, r;
    while (cin >> n >> r, n|r) {
        vi v[2];
        rep(i, n){
            v[0].pb(n-i);
            v[1].pb(n-1);
        }
        rep(i, r) {
            int p, c;
            cin >> p >> c;
            int j = 0;
            for (; j < c; j++){
                v[(~i)&1][j] = v[i&1][j+p-1];
            }
            for (; j < c + p-1; j++){
                v[(~i)&1][j] = v[i&1][j-c];
            }
            for (; j < n; j++){
                v[(~i)&1][j] = v[i&1][j];
            }
        }
        cout << v[r&1][0] << endl;
    }
    return 0;
}