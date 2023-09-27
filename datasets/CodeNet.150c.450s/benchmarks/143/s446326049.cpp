#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;
int n,q;
const int m=1e5+5;
vector<ll> v(1e5+6);
int main(){
    cin >> n;
    ll ans=0;
    for(int i=0; i<n; i++){ll a; cin >> a; v[a]++; ans+=a;} 
    cin >> q;
    vector<ll> v_ans(m); v_ans[0]=ans;
    for(int i=0; i<q; i++){
        ll b,c; cin >> b >> c; 
        v_ans[i+1] = v_ans[i] + c*v[b] - b*v[b];
        v[c]+=v[b]; v[b]=0;
    }
    for(int i=0; i<q; i++) cout << v_ans[i+1] << "\n";
}