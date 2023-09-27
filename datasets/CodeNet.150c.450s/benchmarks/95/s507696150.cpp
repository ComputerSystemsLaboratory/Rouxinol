#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        bool pre=1,l=0,r=0;
        int ans=0;
        for(int i=0;i<n;++i){
            string s;cin>>s;
            if(s[0]=='l'){
                if(l)l=0;
                else l=1;
            }
            else{
                if(r)r=0;
                else r=1;
            }
            if((pre==r) && (pre==l)){
                ++ans;
                if(pre)pre=0;
                else pre=1;
            }
        }
        cout<<ans<<endl;
    }
}