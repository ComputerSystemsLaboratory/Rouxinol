#include <bits/stdc++.h>

using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1){
        int m,nmin,nmax;
        cin>>m>>nmin>>nmax;

        if(m==0)break;

        vector<int> p(m);
        for(int i=0;i<m;i++)cin>>p[i];

        int ans=0,point=0;

        for(int i=nmin;i<=nmax;i++){
            int gap=p[i-1]-p[i];
            if(point<=gap){
                ans=i;
                point=gap;
            }
        }

        cout<<ans<<endl;

    }

}
