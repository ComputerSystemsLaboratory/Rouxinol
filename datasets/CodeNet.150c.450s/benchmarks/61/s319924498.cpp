#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1){
        long long n,a,b,c,x;
        cin>>n>>a>>b>>c>>x;

        if(n==0)break;

        vector<int> y(n);
        for(int i=0;i<n;i++)cin>>y[i];

        int ans=-1;

        for(int i=0;i<=10000;i++){
            for(int j=0;j<n;j++){
                if(y[j]!=-1){
                    if(y[j]==x)y[j]=-1;
                    break;
                }
            }
            bool f=true;
            for(int j=0;j<n;j++)if(y[j]!=-1)f=false;
            if(f){
                ans=i;
                break;
            }
            x=(a*x+b)%c;
        }
        
        cout<<ans<<endl;

    }

}
