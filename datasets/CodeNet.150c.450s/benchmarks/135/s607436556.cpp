#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
    while(1){
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0)break;
        vector<int> h(n+1),w(m+1);
        h[0]=0;
        for(int i=0;i<n;i++){
            cin>>h[i+1];
            h[i+1]+=h[i];
        }
        w[0]=0;
        for(int i=0;i<m;i++){
            cin>>w[i+1];
            w[i+1]+=w[i];
        }
        vector<int> x(1000*1500+2),y(1000*1500+2);
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                x[h[j]-h[i]]++;
            }
        }
        for(int i=0;i<=m;i++){
            for(int j=i+1;j<=m;j++){
                y[w[j]-w[i]]++;
            }
        }
        long long ans=0;
        for(int i=1;i<1000*1500+2;i++){
            ans+=x[i]*y[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
