#include <iostream>
using namespace std;
int main(){
      int ws[23],sum,num,dp[50003];
      cin >> sum >> num;
      for (int i = 0;i<num;i++)
            cin >> ws[i];
      for (int i = 0;i <= sum ; i ++ )
            dp[i] = i;
      for(int i = 1;i < num ;i++){
            for(int j = ws[i];j <= sum;j++)
                  dp[j] = min(dp[j],dp[j-ws[i]]+1);
      }
      cout << dp[sum]<<endl;
}