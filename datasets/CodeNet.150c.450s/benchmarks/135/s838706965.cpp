#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n,m;
    while(1){
        cin>>n>>m;
        if(n+m==0)return 0;
        vector<int>V1,V2;
        int h[n+1],w[m+1];
        h[0]=w[0]=0;
        for(int i=0;i<n;i++)cin>>h[i+1];
        for(int i=0;i<m;i++)cin>>w[i+1];
        for(int i=1;i<=n;i++)h[i]+=h[i-1];
        for(int i=1;i<=m;i++)w[i]+=w[i-1];
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                V1.push_back(h[j]-h[i]);
            }
        }
        for(int i=0;i<=m;i++){
            for(int j=i+1;j<=m;j++){
                V2.push_back(w[j]-w[i]);
            }
        }
        sort(V1.begin(),V1.end());
        sort(V2.begin(),V2.end());
        int cnt=0,f=-1;
        map<int,int>VV1,VV2;
        for(int i=0;i<V1.size();i++){
            if(f==V1[i])cnt++;
            else{
                if(f==-1){
                    f=V1[i];
                    cnt=1;
                }else{
                    VV1[f]=cnt;
                    f=V1[i];cnt=1;
                }
            }
        }
        VV1[f]=cnt;
        cnt=0;f=-1;
        for(int i=0;i<V2.size();i++){
            if(f==V2[i])cnt++;
            else{
                if(f==-1){
                    f=V2[i];
                    cnt=1;
                }else{
                    VV2[f]=cnt;
                    f=V2[i];cnt=1;
                }
            }
        }
        VV2[f]=cnt;
        int ans=0;
        map<int,int>::iterator it;
        for(it=VV1.begin();it!=VV1.end();it++){
            ans+=(it->second)*VV2[(it->first)];
        }
        cout<<ans<<endl;
    }
}