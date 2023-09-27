#include <iostream>
#include <vector>
#include <algorithm>

#define INF (int)1e+9
using namespace std;

void dumpmat(vector<vector<int> >& a,int n){

  for( int i=1; i<=n; i++ ){
    for( int j=1; j<=n; j++ ){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
}

int main(){

  int n; cin >> n;
  vector<int> p(n+1);
  for(int i=0; i<n; i++) cin >> p[i] >> p[i+1];

  vector<vector<int> > m(n+1, vector<int>(n+1,INF));
  // dp[i][k] : i (0 <= i <= n-1)???????????? k (1 <= k <= n) ??????????????????????°????
  /*
  for(int i=0; i<=n; i++) m[i][1] = 0;
 
  for(int l=2; l<=n; l++){
    for(int i=1; i<n-l+1; i++){
      int j=i+l-1;
      dp[i][j]=INF;
      for(int k=i; k<=j-1; k++){
	dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]);
      }
      dumpmat(dp,n);
    }
  } 
  cout << dp[1][n] << endl;
*/
  for ( int i = 1; i <= n; i++ ) m[i][i] = 0;
  for ( int l = 2; l <= n; l++ ) {
    for ( int i = 1; i <= n - l + 1; i++ ) {
      int j = i + l - 1;
      m[i][j] = (1 << 21);
      for ( int k = i; k <= j - 1; k++ ) {
	m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
      }
      //      dumpmat(m,n);
    }
  }

  cout << m[1][n] << endl;
  return 0; 
}