#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m,n){
        vector<int>v(11,0);
        for(int i=0;i<n;++i){
            int d,p;
            cin>>d>>p;
            v[p]+=d;
        }
        int ans=0;
        for(int i=10;i>0;--i){
            if(m>v[i]){
                m-=v[i];
                v[i]=0;
            }else{
                v[i]-=m;
                m=0;
            }
            ans+=v[i]*i;
        }
        cout<<ans<<endl;
    }
}