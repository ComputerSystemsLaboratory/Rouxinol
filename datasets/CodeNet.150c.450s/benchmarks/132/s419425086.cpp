#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)

int main(){
    int n,p;
    while(cin>>n>>p,n|p){
        int a[51]={};
        int P=p,i=0;
        while(1){
            if(p){
                p--;
                a[i]++;
            }else{
                p=a[i];
                a[i]=0;
            }
            if(a[i]==P)break;
            if(++i==n)i=0;
        }
        cout<<i<<endl;
    }
    return 0;
}