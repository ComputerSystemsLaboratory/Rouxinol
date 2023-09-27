#include <bits/stdc++.h>
using namespace std;

static const int MAX = 1500000+10;

int main(){

    while(1){
        int h[1500+10],w[1500+10];
        int N,M;
        cin>>N>>M;
        if(N == 0 && M == 0) break;
        for(int i=0; i<N; i++) cin>>h[i];
        for(int i=0; i<M; i++) cin>>w[i];

        vector<int> H(MAX,0),W(MAX,0);
        
        for(int i=0; i<N; i++){
            int tmp = 0;
            for(int j=i; j<N; j++){
                tmp += h[j];
                H[tmp]++;
            }
        }

        for(int i=0; i<M; i++){
            int tmp = 0;
            for(int j=i; j<M; j++){
                tmp += w[j];
                W[tmp]++;
            }
        }

        int ans = 0;

        for(int i=0; i<MAX; i++){
            ans += (W[i]*H[i]);
        }

        cout<<ans<<endl;

    }

    return 0;
}
