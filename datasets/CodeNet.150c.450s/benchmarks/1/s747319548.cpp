#include<bits/stdc++.h>
using namespace std;
const int INF=1001001001;
int dp[100010];
int N;

int main(){
    cin>>N;
    fill_n(dp,N+2,INF);

    for(int i=0;i<N;i++){
        int A;cin>>A;
        *lower_bound(dp,dp+N+2,A)=A;
    }
    cout<<lower_bound(dp,dp+N+2,INF)-dp<<endl;
    return 0;
}