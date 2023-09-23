#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    int ans=INT_MAX;
    int j,tmp;
    for(int i=0;i*i*i<=n;i++){
        tmp=n-i*i*i;
        for(j=0;j*j<=tmp;j++){}
        j--;
        ans=min(ans,i+j+tmp-j*j);
    }
    cout<<ans<<endl;
}

int main(void){
    int n;
    while(cin>>n,n){
        solve(n);
    }
    
}

