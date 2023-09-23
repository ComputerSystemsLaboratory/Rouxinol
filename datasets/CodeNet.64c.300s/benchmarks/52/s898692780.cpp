#include<bits/stdc++.h>
using namespace std;
int num,n,s,ans;
int solve(int a,int dp,int sum);

int main(){
    while(1){
    cin >> n >> s;
    if(n==0&&s==0)break;
    cout << solve(0,0,0) << endl;
    }
return 0;
}

int solve(int c,int dp,int sum){
    if(dp==10){
        if(sum==s&&c==n)return 1;
        return 0;
    }
    return solve(c,dp+1,sum)+solve(c+1,dp+1,sum+dp);
}