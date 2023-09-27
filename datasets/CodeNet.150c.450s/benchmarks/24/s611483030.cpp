#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
typedef pair<int, int> pint;
int main(){
    int n, m;
    while(cin >> n >> m && n){
        priority_queue<pint> pd;
        rep(i, n){
            int d, p; cin >> d >> p;
            pd.push(pint(p, d));
        }
        int ans = 0;
        while(!pd.empty() && m > 0){
            pint now = pd.top(); pd.pop();
            if(m >= now.second){
                m -= now.second;
            }else{
                ans += (now.second - m) * now.first;
                m -= now.second;
            }
        }
        while(!pd.empty()){
            pint k = pd.top(); pd.pop();
            ans += k.first * k.second;
        }
        cout << ans << endl;
    }
    return 0;
}