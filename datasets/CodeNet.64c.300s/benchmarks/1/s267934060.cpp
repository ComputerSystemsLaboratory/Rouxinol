#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[100001];
int main(){
    int n;
    cin>>n;
    rep(i,n) cin>>a[i];
    int x=a[n-1],cur=-1;
    rep(i,n-1)if(a[i]<=x){
        ++cur;
        swap(a[cur],a[i]);
    }
    ++cur;
    swap(a[cur],a[n-1]);
    rep(i,n){
        if(cur==i) cout<<"["<<a[i]<<"]"<<(i==n-1?"":" ");
        else cout<<a[i]<<(i==n-1?"":" ");
    }
    cout<<endl;
    return 0;
}
