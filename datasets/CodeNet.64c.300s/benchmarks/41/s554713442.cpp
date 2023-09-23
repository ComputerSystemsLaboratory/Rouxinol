#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[500001];
int n;
void maxheapify(int i){
    int l=i*2+1,r=i*2+2,mx;
    if(l<n&&a[i]<a[l]) mx=l;
    else mx=i;
    if(r<n&&a[mx]<a[r]) mx=r;
    if(mx!=i){
        swap(a[i],a[mx]);
        maxheapify(mx);
    }
}
int main(){
    cin>>n;
    rep(i,n) cin>>a[i];
    for(int i=(n-1)/2;i>=0;--i){
        maxheapify(i);
    }
    rep(i,n)cout<<" "<<a[i];
    cout<<endl;
    return 0;
}
