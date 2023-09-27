#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    int n,m,p;
    int ans;
    vector<int>x;
    while(true) {
        cin >> n>>m>>p;
        if(n==0)break;
        x=vector<int>(0);
        ans=0;
        for(int i=0;i<n;i++){
            cin>>t;
            x.push_back(t);
            ans+=t;
        }
        ans=ans*(100-p);
        if(x[m-1]!=0)ans=ans/x[m-1];
        else ans=0;
        cout<<ans<<endl;
    }
    return 0;
}
