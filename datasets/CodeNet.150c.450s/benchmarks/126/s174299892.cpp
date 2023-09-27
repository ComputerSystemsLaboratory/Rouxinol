#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#define REP(i,n) for(int i = 0;i < (n);i++)
#define pb push_back
using namespace std;
const int INF = 1e9;
typedef long long ll;

int main(){
  int n,m;
  
  while(cin >> n >> m,n+m){
    int a[n][m];
    bool w[n][m];
    REP(i,n){
      REP(j,m){
	w[i][j] = true;
      }
    }
    int b;
    cin >> b;
    REP(i,b){
      int t,y;
      cin >> t >> y;
      w[t-1][y-1] = false;
      a[t-1][y-1] = 0;
    }
    a[0][0] = 1;
    for(int i = 1;i < n;i++){
      if(w[i][0] == true){
	if(a[i-1][0] != 0){
	  a[i][0] = a[i-1][0];
	}
	else{
	  a[i][0] = 0;
	}
      }
    }
    for(int i = 1;i < m;i++){
      if(w[0][i] == true){
	if(a[0][i-1] != 0)
	  a[0][i] = a[0][i-1];
	else
	  a[0][i] = 0;
      }
    }
    
    for(int i = 1;i < m;i++){
      for(int j = 1;j < n;j++){
	if(w[j][i] == true){
	  a[j][i] = a[j-1][i] + a[j][i-1];
	  //cout << a[j][i] << endl;
	}
	
	
      }
    }
    cout << a[n-1][m-1] << endl;
  }
  /*REP(i,m){
    REP(j,n){
      cout << a[j][i] << "  ";
    }
    cout << endl;
    }*/
  /*REP(i,n)
    cout << a[i][0] << endl;
  cout << endl;
  REP(i,m){
    cout << a[0][i] << endl;
  }
  */
  return 0;
}