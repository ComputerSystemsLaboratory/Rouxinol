#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define fi first
#define se second
#define all(v) v.begin(),v.end()
const int MOD =1e9+7;

void insert(vector<int>& basis,int mask){
    for(int i=0;i<basis.size();i++){
        if(!mask) return;
        if(!(mask&(1LL<<i))) continue;
        if(!basis[i]){
            basis[i]=mask;
            return;
        }
        mask^=basis[i];
    }
}

bool exist(vector<int>& basis,int mask){
    for(int i=0;i<basis.size();i++){
        if(!mask) return 1;
        if(!(mask&(1LL<<i))) continue;
        if(!basis[i]) return 0;
        mask^=basis[i];
    }
    return (!mask);
}

bool solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    string b;
    cin>>b;
    vector<int> basis(61);
    for(int i=n-1;i>=0;i--){
        if(b[i]=='0'){
            insert(basis,a[i]);
        }else if(!exist(basis,a[i])){
            return 1;
        }
    }
    return 0;
}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie();
    //If you hack my code , You are gay;
    int T;
    cin>>T;
    while(T--){
        cout<<solve()<<"\n";
    }
    return 0;
}