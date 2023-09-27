#include <iostream>
#include <complex>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <cmath>
#include <bitset>
#include <cassert>
#include <queue>
#include <stack>
#include <deque>
#include <random>
#include <iomanip>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> P;
typedef pair<P,P> PP;
const ll MOD=998244353;
const ll MAX_N=500010;
const ll INF=4448283280358331064;

/*
int main(){
    int n;
    cin>>n;
    ll k;
    cin>>k;
    vector<ll> pos(0), neg(0);
    int zero=0;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a>0) pos.push_back(a);
        if(a==0) zero++;
        if(a<0) neg.push_back(-a);
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    ll ub=INF;
    ll lb=-INF;
    while(ub-lb>1){
        ll m=(ub+lb)/2;
        ll num=0;
        //cout<<m<<endl;
        if(m<=0){
            for(ll u:neg){
                num+=pos.end()-upper_bound(pos.begin(),pos.end(),-m/u);
            }
        }else{
            num+=neg.size()*pos.size();
            num+=zero*(neg.size()+pos.size());
            num+=zero*(zero-1)/2;
            for(int i=0;i<pos.size();i++){
                num+=lower_bound(pos.begin()+i, pos.end(), m/pos[i])-(pos.begin()+i);
            }
            for(int i=0;i<neg.size();i++){
                num+=lower_bound(neg.begin()+i, neg.end(), m/neg[i])-(neg.begin()+i);
            }
        }
        if(num<=k){
            lb=m;
        }else{
            ub=m;
        }
    }
    cout<<ub<<endl;
}

*/

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > G(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> ans(n,-1);
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int now=q.front(); q.pop();
        for(int to:G[now]){
            if(ans[to]==-1){
                ans[to]=now;
                q.push(to);
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=1;i<n;i++){
        cout<<ans[i]+1<<endl;
    }

}