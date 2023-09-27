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
    int n, p;
    while (cin >> n >> p, n|p) {
        int cup = p;
        int i = 0;
        vi v(n, 0);
        while(1){
            if (cup == 0) {
                cup += v[i];
                v[i] = 0;
                i = (i+1) %n;
            } else {
                cup--;
                v[i]++;
                if (p == v[i])
                    break;
                i = (i+1) % n;
            }
        }
        cout << i << endl;
    }
    return 0;
}