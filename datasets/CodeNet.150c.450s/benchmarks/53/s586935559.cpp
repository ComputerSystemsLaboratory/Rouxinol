#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
const int inf=1e9+7;
const ll mod=1e9+7;
const ll big=1e18;

int main() {
    ll N;
    cin>>N;
    ll n = N;
    vector<ll> ans;
    for(ll i=2;i*i<=N;++i){
        while(N%i==0){
            ans.push_back(i);
            N /= i;
        }
    }
    if(N>1) ans.push_back(N);
    cout<<n;
    cout<<':';
    for(int i=0;i<ans.size();++i){
        cout<<' ';
        cout<<ans[i];
    }
    cout<<endl;
}


