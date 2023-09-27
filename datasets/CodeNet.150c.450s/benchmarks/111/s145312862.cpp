#include<cstdio>
#include<iostream>
#include<queue>
#include<stack>
#define MAX_N 25

using namespace std;

long long int dp[110][MAX_N];
int n,num[110];

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>num[i];
    }
    dp[0][num[0]]=1;

    for(int i=1;i<n;++i){
        for(int j=0;j<=20;j++){
            if(j+num[i]<=20){
                dp[i][j+num[i]]+=dp[i-1][j];
            }
            if(j-num[i]>=0){
                dp[i][j-num[i]]+=dp[i-1][j];
            }
        }
    }
    cout<<dp[n-2][num[n-1]]<<endl;

    return 0;
}