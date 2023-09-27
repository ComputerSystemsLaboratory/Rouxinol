#include<iostream>
#include<string>
using namespace std;

const long long int INF = 50000000;

int main(){

    string s1,s2;

    cin >> s1 >> s2;

    int size1,size2;

    size1 = s1.size();
    size2 = s2.size();

    long long int dp[size1+1][size2+1];

    for(int i=0; i<size1+1; i++){
      for(int j=0; j<size2+1;j++){
        dp[i][j] = INF;
      }
    }

    for(int i=0;i<size1+1;i++){
      dp[i][0] = i;
    }
    for(int i=0;i<size2+1;i++){
      dp[0][i] = i;
    }


    for(int i=1; i<size1+1; i++){
      for(int j=1; j<size2+1; j++){

        dp[i][j] = min(dp[i-1][j]+1,dp[i][j-1]+1);

        if(s1[i-1] == s2[j-1]){
          dp[i][j] = min(dp[i][j],dp[i-1][j-1]);
        }
        else{
          dp[i][j] = min(dp[i][j],dp[i-1][j-1]+1);
        }

      }

    }

    cout << dp[size1][size2] << endl;

    return 0;
}