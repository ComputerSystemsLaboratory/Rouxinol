#include "bits/stdc++.h"
/*#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <complex>
#include <bitset>
#include <functional>
#include <stack>
#include <regex>
#include <tuple>
#include <iomanip>
*/
#define int long long
#define REP(i,a,n) for(int i=a;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,n) for(int i=n;i>=a;--i)
#define all(e) e.begin(),e.end()
#define rall(e) e.rbegin(),e.rend()
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define show(n) cerr<<#n<<" = "<<n<<endl
#define showp(n) cerr<<n.fs<<", "<<n.sc<<endl
#define shows(n) for(auto z:n){cerr<<z<<", ";}cerr<<endl
#define showsp(n) for(auto z:n){cerr<<z.fs<<" "<<z.sc<<", "}cerr<<endl

#define yes puts("Yes")
#define no puts("No")
#define case(i) printf("Case #%lld: ",i)

using namespace std;

using vi=vector<int>;
using pint=pair<int,int>;

inline void io(){cin.tie(0);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(20);}
inline int   in(){int n;scanf("%lld",&n);return n;}
inline void out(int n){printf("%lld\n",n);}

const int INF=1LL<<55;
const int MOD=1000000007;
const double EPS=1e-8;

int digit;
string num;
vi results;
int sml,bg,res;

void solve(){
    int cnt=0;
    int st;
    while(++cnt){
        sort(all(num));
        sscanf(num.c_str(),"%lld",&sml);
        sort(rall(num));
        sscanf(num.c_str(),"%lld",&bg);
        res=bg-sml;
        bool f=false;
        rep(i,results.size()){
            if(results[i]==res){
                st=i;
                f=true;break;
            }
        }
        if(f) break;
        else{
            results.pb(res);
            num=to_string(res);
            while(num.size() < digit) num.append("0");
        }
    }
    cout<<st<<" "<<res<<" "<<cnt-st<<endl;
}

signed main() {
    io();

    while(cin>>num>>digit,digit){
        results.clear();
        sscanf(num.c_str(),"%lld",&res);
        results.pb(res);
        while(num.size() < digit) num.append("0");
        solve();
    }
    
    return 0;
}

