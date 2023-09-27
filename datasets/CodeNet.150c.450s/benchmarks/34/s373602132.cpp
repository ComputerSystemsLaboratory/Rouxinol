#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N=30;

int main(){
    int n;
    ll dp[N+1];

    dp[1]=1;
    dp[2]=2;
    dp[3]=4;

    for(int i=4;i<=N;i++){
        dp[i]= dp[i-1] + dp[i-2] + dp[i-3];
    }

    while(cin>>n,n){
        cout<<ceil(dp[n]/(double)3650)<<endl;
    }

    return 0;
}