#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n_min,n_max;
    while(cin>>m>>n_min>>n_max,m){
        int pre;
        for(int i=0;i<n_min;++i){
            cin>>pre;
        }
        int buf1=0,ans;
        for(int i=n_min;i<=n_max;++i){
            int p;cin>>p;
            if(buf1<=pre-p){
                buf1=pre-p;
                ans=i;
            }
            pre=p;
        }
        for(int i=n_max+1;i<m;++i)cin>>pre;
        cout<<ans<<endl;
    }
}