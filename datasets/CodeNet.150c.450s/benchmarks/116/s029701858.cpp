#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int N,K;
        cin>>N>>K;
        if(N ==  0 && K == 0) break;
        vector<long long> A(N);
        for(int i=0; i<N; i++) cin>>A[i];

        vector<long long> sum(N+1,0);
        for(int i=1; i<=N; i++){
            sum[i] = sum[i-1]+A[i-1];
        }

        long long ans=0;

        for(int i=0; i<=N-K; i++){
            ans = max(ans,sum[i+K]-sum[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}
