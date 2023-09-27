#include <bits/stdc++.h>
using namespace std;

void solve(int n,int mn,int mx){
    int t,st=0,maxx=0,ans=0;
    vector<int> v;
    cin >> st;
    for(int i=0;i<n-1;i++){
        cin >> t;
        v.push_back(st-t);
        st=t;
    }
    for(int i=mn-1;i<mx;i++){
        if(maxx<v[i]){
            maxx=v[i];
        }
        if(maxx<=v[i]){
            ans=i+1;
        }
    }
    
    cout<<ans<<endl;
    
}

int main(void){
    int a,b,c;
    while(cin>>a>>b>>c,a){
        solve(a,b,c);
    }
    
    
    
}