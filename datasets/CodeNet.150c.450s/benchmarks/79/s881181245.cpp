#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)

int main(){
    int n,r,p,c;
    int a[52]={},tmp[52]={};
    while(cin>>n>>r,n|r){
        rep(i,n)a[i+1]=n-i;
        while(r--){
            cin>>p>>c;
            rep(i,c)tmp[i+1]=a[p+i];
            rep1(i,p-1)tmp[c+i]=a[i];
            rep1(i,c+p-1)a[i]=tmp[i];
        }
        cout<<a[1]<<endl;
    }
    return 0;
}