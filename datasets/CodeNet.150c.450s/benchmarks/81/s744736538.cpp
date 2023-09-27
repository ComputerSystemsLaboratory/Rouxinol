#include <iostream>
#include <vector>
using namespace std;
#define REP(i, n)           for(int(i)=0;(i)<(n);++(i))
template<class _T> _T MAX(_T p1,_T p2){return (p2<p1)?p1:p2;} 
template<class _T> _T MIN(_T p1,_T p2){return (p1<p2)?p1:p2;} 
typedef vector<int> VI;
typedef vector<VI> VVI;
#define pb                  push_back

const int inf = 1<<29;

void solve(VVI vi, int n){
    REP(k,n)REP(i,n)REP(j,n){
        vi[i][j] = MIN(vi[i][j], vi[i][k]+vi[k][j]);
    }
    int res = inf, idx = -1;
    REP(i,n){
        int total = 0;
        REP(j,n) total += vi[i][j];
        if(res > total){
            idx = i;
            res = total;
        }
    }
    cout << idx << " " << res << endl;
}

int main(void){
    int n;
    while(cin >> n && n){
        VVI vi(10, VI(10, inf));
        int m = 0;
        REP(i,n){
            int a,b,c;
            cin >> a>>b>>c;
            vi[a][b] = MIN(vi[a][b], c);
            vi[b][a] = MIN(vi[b][a], c);
            m = MAX(m, MAX(a,b));
        }
        m++;
        REP(i,m) vi[i][i] = 0;
        solve(vi, m);
    }
    return 0;
}