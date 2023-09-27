#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[1005][1005];

void ExtendedEditDistance(vector<string> s1, vector<string> s2){
  
  const int INF = 1e9;
  
  for(int i=0;i<1005;i++)
    for(int j=0;j<1005;j++) dp[i][j] = INF;
  
  dp[0][0] = 0;
  
  int sum1 = 0, sum2;
  
  for(int i=0;i<(int)s1.size();i++){
    
    for(int j=0;j<(int)s1[i].size();j++){
      
      int idx1 = sum1 + j;
      
      sum2 = 0;
      
      for(int k=0;k<(int)s2.size();k++){
	
	for(int l=0;l<(int)s2[k].size();l++){
	  
	  int idx2 = sum2 + l;
	  
	  if( s1[i][j] == s2[k][l] ) dp[idx1+1][idx2+1] = min( dp[idx1+1][idx2+1], dp[idx1][idx2] );
	  else{
	    
	    dp[idx1+1][idx2] = min( dp[idx1+1][idx2], dp[idx1][idx2] + 1 );
	    
	    dp[idx1][idx2+1] = min( dp[idx1][idx2+1], dp[idx1][idx2] + 1 );
	    
	    dp[idx1+1][idx2+1] = min( dp[idx1+1][idx2+1], dp[idx1][idx2] + 1 );
	    
	  }
	  /*
	  if( j == 0 ) dp[idx1+s1[i].size()][idx2] = min( dp[idx1+s1[i].size()][idx2], dp[idx1][idx2] + 1 );
	  
	  if( l == 0 ) dp[idx1][idx2+s2[k].size()] = min( dp[idx1][idx2+s2[k].size()], dp[idx1][idx2] + 1 );
	  */
	  if( i == (int)s1.size() - 1 ){
	  
	    int idx1 = sum1 + s1[i].size();
	    
	    dp[idx1][idx2+1] = min( dp[idx1][idx2+1], dp[idx1][idx2] + 1 );
	    
	    //if( l == 0 ) dp[idx1][idx2+s2[k].size()] = min( dp[idx1][idx2+s2[k].size()], dp[idx1][idx2] + 1 );
	    
	  }
	  
	}
	
	if( k == (int)s2.size() - 1 ){
	  
	  int idx2 = sum2 + s2[k].size();
	  
	  dp[idx1+1][idx2] = min( dp[idx1+1][idx2], dp[idx1][idx2] + 1 );
	  
	  //	  if( j == 0 ) dp[idx1+s1[i].size()][idx2] = min( dp[idx1+s1[i].size()][idx2], dp[idx1][idx2] + 1 );
	  
	}	
	
	sum2 += s2[k].size();
	
      }
      
    }
    
    sum1 += s1[i].size();
    
  }
  
  cout<<dp[sum1][sum2]<<endl;
  
  /*
    int ans = dp[sum1][sum2];
  
  for(int i=0;i<1005;i++) ans = min( ans, dp[sum1][i] + sum2 - i );
  
  for(int i=0;i<1005;i++) ans = min( ans, dp[i][sum2] + sum1 - i );
  
  cout<<ans<<endl;
  */
  
}

signed main(){
  
  vector<string> s1, s2;
  
  string A, B;
  cin>>A>>B;
  
  s1.push_back( A );
  
  s2.push_back( B );
  
  ExtendedEditDistance(s1,s2);
  
  return 0;
}

