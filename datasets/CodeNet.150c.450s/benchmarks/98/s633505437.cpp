#include "bits/stdc++.h"

using namespace std;

const int INF = numeric_limits<int>::max() / 2;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n,m;
    while(cin>>n>>m,n&&m){
        vector<int> taro(n),hana(m);
        int taro_sum=0,hana_sum=0;
        for(int i=0;i<n;i++){
            cin>>taro[i];
            taro_sum+=taro[i];
        }
        for(int i=0;i<m;i++){
            cin>>hana[i];
            hana_sum+=hana[i];
        }
        int mi=INF,t=-1,h=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(taro_sum-taro[i]+hana[j]!=hana_sum-hana[j]+taro[i]) continue;
                if(taro[i]+hana[j]<mi){
                    t=taro[i];h=hana[j];
                    mi=taro[i]+hana[j];
                }
            }
        }
        if(t==-1) cout<<"-1"<<endl;
        else cout<<t<<" "<<h<<endl;
    }
}