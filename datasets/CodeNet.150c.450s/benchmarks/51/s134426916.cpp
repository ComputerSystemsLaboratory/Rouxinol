#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const ll INF=1LL<<60;
const int inf=1<<30;
const int mod=1e9+7;
const int MOD=998244353;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> c(31);
    for(int i=0;i<28;i++){
        int a;cin >> a;
        c[a]++;
    }
    for(int i=1;i<=30;i++){
        if(!c[i]){
            cout << i << endl;
        }
    }
}
