#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
  int q;
  cin >> q;

  for(int i=0; i<q; i++){
    string x, y;
    cin >> x >> y;
    
    int nx, ny;
    nx = x.size();
    ny = y.size();
    
    vector< vector<int> > lcs(nx+1, vector<int>(ny+1, 0));

    for(int i=1; i<=nx; i++){
      for(int j=1; j<=ny; j++){
	if(x[i-1] == y[j-1])
	  lcs[i][j] = lcs[i-1][j-1] + 1;
	else
	  lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
      }
    }
    
    cout << lcs[nx][ny] << endl;
  }

  return 0;
}