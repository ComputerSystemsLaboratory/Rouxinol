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
    int x, y, s;
    while (cin >> x >> y >> s, x|y|s) {
        int maxc = 0;
        REP(cost, 1, s-1){
            for(int cost2 = s-1; cost2 >= cost; cost2--) {
                if(cost*(100+x)/100+cost2*(100+x)/100 == s){
                    maxc = max(maxc, cost*(100+y)/100+cost2*(100+y)/100);
                }
            }
        }
        cout << maxc << endl;
    }
    return 0;
}