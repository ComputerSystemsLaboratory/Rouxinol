#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(void){
    int t;
    int n,m;
    int ans;
    vector<int>h,w,hc,wc;
    while(true) {
        cin >> n>>m;
        if(n==0)break;
        h=vector<int>(1,0);
        w=vector<int>(1,0);
        ans=0;
        hc=vector<int>(1500000);
        wc=vector<int>(1500000);
        for(int i=0;i<n;i++){cin>>t;h.push_back(t+h[i]);}
        for(int i=0;i<m;i++){cin>>t;w.push_back(t+w[i]);}
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i>=j)continue;
                hc[h[j]-h[i]]++;
            }
        }
        for(int i=0;i<=m;i++){
            for(int j=0;j<=m;j++){
                if(i>=j)continue;
                wc[w[j]-w[i]]++;
            }
        }
        for(int i=0;i<1500000;i++){
            ans+=hc[i]*wc[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
