#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[501];
int main(){
    int n;
    cin>>n;
    rep(i,n) cin>>a[i];
    rep(i,n){
        int l=i*2+1,r=i*2+2;
        cout<<"node "<<i+1<<": key = "<<a[i]<<", ";
        if(i!=0) cout<<"parent key = "<<a[(i-1)/2]<<", ";
        if(l<n) cout<<"left key = "<<a[l]<<", ";
        if(r<n) cout<<"right key = "<<a[r]<<", ";
        cout<<endl;
    }
    return 0;
}
