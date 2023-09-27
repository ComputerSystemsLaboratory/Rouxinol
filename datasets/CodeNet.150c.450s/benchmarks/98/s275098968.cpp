#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
typedef pair<int, int> P;        
int main(){
    int n, m;
    while(cin >> n >> m && n){
        int sum = 0;
        vector<int> p(n), q(m);
        rep(i, n){
            cin >> p[i];
            sum += p[i];
        }
        rep(i, m){
            cin >> q[i];
            sum -= q[i];
        }
        int ap = INF, aq = INF;
        for(int pn : p) for(int qn : q)
          if(2 * (pn - qn) == sum && pn + qn < ap + aq){
              ap = pn;
              aq = qn;
          }
        if(ap == INF){
            puts("-1");
        }else{
            cout << ap << ' ' << aq << endl;
        }
    }
    return 0;
}