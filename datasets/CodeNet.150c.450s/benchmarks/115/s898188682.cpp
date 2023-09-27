#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <bitset>
#include <iterator>
#include <iomanip>
#include <sstream>
#define INF 2000000000
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
#define sym cout<<"---------"<<endl;
#define ll long long
#define PL pair<long long, long long>
#define P pair<int,int>
#define mk make_pair
#define en endl
#define WHITE 0
#define BLACK 2
#define GRAY 1
#define RE return 0
#define int ll

//  最長共通部分列

int dp[1005][1005];

signed main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    string s1,s2;
    cin>>s1>>s2;
    s1=" "+s1;
    s2=" "+s2;
    int maxl=0;
    for(int i=0; i<=s1.size()-1; i++) for(int j=0; j<=s2.size(); j++) dp[i][j]=0;
    for(int i=1; i<=s1.size()-1; i++){
      for(int j=1; j<=s2.size(); j++){
        if(s1[i]==s2[j]) dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        maxl=max(maxl,dp[i][j]);
      }
    }
    cout<<maxl<<en;
  }
}



