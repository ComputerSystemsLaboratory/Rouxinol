#include<bits/stdc++.h>
using namespace std;
int n,memo[50][50];
int solve(int dp,int sum);

int main(){
    while(1){
    cin >> n;
    if(n==0)break;
    cout << (solve(0,0)/(365*10))+1 << endl;
    fill(memo[0],memo[49],0);
    }

return 0;
}

int solve(int dp,int sum){
    if(sum==n)return 1;
    else if(sum>n)return 0;
    if(memo[dp][sum]!=0)return memo[dp][sum];
    return memo[dp][sum]=solve(dp+1,sum+1)+solve(dp+1,sum+2)+solve(dp+1,sum+3);
}