#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
int dp[1010][1010];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s1,s2;
  cin>>s1>>s2;
  int n1=s1.length(),n2=s2.length();
  
  CLR(dp);
  FOR(i,1,1010)dp[i][0]=dp[0][i]=i;
  FOR(i,1,n1+1){
    FOR(j,1,n2+1){
      dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
      if(s1[i-1]==s2[j-1])dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
      //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
    }
  }
  cout<<dp[n1][n2]<<endl;
}
