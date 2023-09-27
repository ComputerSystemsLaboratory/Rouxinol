#include <bits/stdc++.h>

using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1){
        int x,y,s;
        cin>>x>>y>>s;

        if(x==0)break;

        int ans=0;

        for(int i=1;i<s;i++){
                for(int j=1;j<s;j++){
                int cost1=i*(100+x)/100+j*(100+x)/100;
                if(cost1==s){
                    int cost2=i*(100+y)/100+j*(100+y)/100;
                    ans=max(ans,cost2);
                }
            }
        }

        cout<<ans<<endl;

    }

}
