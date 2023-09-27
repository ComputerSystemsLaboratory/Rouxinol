#include <iostream>
typedef long long ll;
using namespace std;
int main(void){
    string s1,s2;
    cin >> s1 >> s2;
    ll ss1=s1.size(),ss2=s2.size();
    ll dp[++ss1][++ss2];
    int i,j;
    fill(dp[0],dp[0]+(ss1*ss2),10000);
    for(i=0;i<ss2;i++){
        dp[0][i]=i;
    }
    for(i=0;i<ss1;i++)dp[i][0]=i;
    for(i=1;i<ss1;i++){
        for(j=1;j<ss2;j++){
            if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=dp[i-1][j-1]+1;
            dp[i][j]=min(dp[i][j],min(dp[i-1][j],dp[i][j-1])+1);
        }
    }
    cout << dp[ss1-1][ss2-1] << endl;
    return 0;
}

