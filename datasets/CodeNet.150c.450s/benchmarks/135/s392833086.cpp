#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m,n){
        vector<int>h(n),w(m);
        for(int i=0;i<n;++i){
            cin>>h[i];
        }
        for(int i=0;i<m;++i){
            cin>>w[i];
        }
        vector<int>comb1(1500001,0);
        long long ans=0;
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
                int buf=0;
                for(int k=i;k<=j;++k){
                    buf+=h[k];
                }
                comb1[buf]++;
            }
        }
        for(int i=0;i<m;++i){
            for(int j=i;j<m;++j){
                int buf=0;
                for(int k=i;k<=j;++k){
                    buf+=w[k];
                }
                ans+=comb1[buf];
            }
        }
        cout<<ans<<endl;
    }
}