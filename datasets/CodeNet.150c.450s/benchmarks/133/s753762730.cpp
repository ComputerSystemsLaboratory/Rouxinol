#include <bits/stdc++.h>
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define ALL(x) (x).begin(),(x).end() 
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1000000000
using namespace std;
typedef long long ll;

int main(){
    int D;
    cin >> D;
    vector<int> c(26);
    vector<vector<int>> s (D, vector<int>(26));
    vector<int> t(D);
    vector<int> last(26);

    REP(i, 26){
        cin >> c[i];
    }
    REP(i, D){
        REP(j, 26){
            cin >> s[i][j];
        }
    }
    REP(i, D){
        cin >> t[i];
    }

    ll st = 0, los = 0;
    REP(i, D){
        st += s[i][t[i]-1];
        last[t[i]-1] = i+1;
        //cout << st << endl;   //満足度の低下を考えない場合
        REP(j, 26){
            los += c[j]*(i+1 - last[j]);
        }
        //cout << st << endl;
        cout << st - los << endl;
    }
}
