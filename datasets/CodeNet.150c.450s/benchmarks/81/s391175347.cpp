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
    int n;
    while (cin >> n, n) {
        int d[10][10];
        fill_n((int *)d, 10 * 10, INF);
        for (int i = 0; i < n; i++) {
            int from, to, cost;
            cin >> from >> to >> cost;
            d[from][to] = d[to][from] = cost;
        }
        for (int k = 0; k < 10; k++) {
            for (int i = 0; i < 10; i++) {
                for (int j = i+1; j < 10; j++) {
                    d[i][j] = d[j][i] = min(d[i][k] + d[k][j], d[i][j]);
                }
            }
        }
        vi sums;
        for (int i = 0; i < 10; i++) {
            int sum = 0;
            for (int j : d[i]) {
                if (j != INF) sum += j;
            }
            if (sum != 0) sums.pb(sum);
        }
        int m = sums[0];
        int ind = 0;
        for (int i = 0; i < sums.size(); i++) {
            if (m > sums[i]) {
                m = sums[i];
                ind = i;
            }
        }
        cout << ind << " " << m << endl;
    }
    return 0;
}