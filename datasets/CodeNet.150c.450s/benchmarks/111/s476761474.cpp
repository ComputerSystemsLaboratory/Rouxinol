#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
long long int dp[100][21];
int main(){
  int n;
  vector<int> lot;
  cin >>n;
  for(int i=0,a; i<n; i++){cin >>a; lot.push_back(a);}
  dp[0][lot[0]] = 1;
  for(int i=1; i<n-1; i++){
    for(int j=0; j<21; j++){
      if(j-lot[i]>=0) dp[i][j-lot[i]]+=dp[i-1][j];
      if(j+lot[i]<=20) dp[i][j+lot[i]]+=dp[i-1][j];
    }
  }
  cout <<dp[n-2][lot[n-1]]<<endl;
  return 0;
}