#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

#define FOR(i,a,b) for(int i=(a);i<(b);++(i))
#define REP(i,n) FOR(i,0,n)

#define dump(x) cerr << #x << " = " <<(x)<<endl;
#define debug(x) cerr << #x << " = " <<(x) << "(L" << __LINE__ << ")" << __FILE__ << endl;

using namespace std;

int main(void){
  int n,i;
  cin >> n;
  vector<int> input(n+1);
  REP(i,n) cin >> input[i] >> input[i+1];
  
  vector<vector<int>> res(n+1, vector<int>(n+1));
  vector<int> p(n+1);
  FOR(i,1,n+1) res[i][i]=0;
  FOR(l,2,n+1){
    FOR(i,1,n-l+2){
      int j = i+l-1;
      res[i][j] = (1<<21);
      FOR(k,i,j){
        res[i][j] = min(res[i][j],res[i][k]+res[k+1][j] + input[i-1]*input[k]*input[j]);

        
      }
    }
  }
  /*
  REP(i,n+1){
    REP(j,n+1){
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
  */
  cout << res[1][n] << endl;


  return 0;
}