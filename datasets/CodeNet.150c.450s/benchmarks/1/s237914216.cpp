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
        int lb=-1,ub=N+2;
        while(ub-lb>1){
            int mid=(ub+lb)/2;
            if(dp[mid]>=A)ub=mid;
            else lb=mid;
        }
        dp[ub]=A;
    }

    int lb=-1,ub=N+2;
    while(ub-lb>1){
        int mid=(ub+lb)/2;
        if(dp[mid]>=INF)ub=mid;
        else lb=mid;
    }

    cout<<ub<<endl;
    return 0;
}