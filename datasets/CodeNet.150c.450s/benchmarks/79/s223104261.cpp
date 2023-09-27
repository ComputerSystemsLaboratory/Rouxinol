#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[51],b[51];
int main(){
    int n,r,p,c;
    while(cin>>n>>r,n){
        rep(i,n) a[i]=n-i;
        rep(i,r){
            cin>>p>>c;
            FOR(j,p-1,p+c-1) b[j-p+1]=a[j];
            for(int j=p-2;j>=0;--j) a[j+c]=a[j];
            rep(j,c) a[j]=b[j];
        }
        cout<<a[0]<<endl;
    }
    return 0;
}
