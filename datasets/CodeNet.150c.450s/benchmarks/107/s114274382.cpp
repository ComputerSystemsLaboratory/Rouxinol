
#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010]={0};

void chmin (int &a, int b){
  if(a>b){swap(a,b);} return;}

int main(){
string s,t; cin >> s >> t;

for(int i =0; i < 1010; i++){ dp[i][0]=i; dp[0][i]=i;}
int m = s.size();  int n = t.size();
for(int i = 1; i <= m; i++){
  for(int j = 1; j <= n; j++){
    int  res = 1e9;
   chmin(res , dp[i-1][j]+1);
   chmin(res , dp[i][j-1]+1);

int c=1; 
if( s[i-1]==t[j-1]){c=0;}
   chmin(res ,dp[i-1][j-1]+c);

   dp[i][j]=res;

   }
}

cout << dp[m][n] << endl; return 0;}
