#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int r,c;
  cin >> r >> c;
  vector<vector<int> > v(r+1,vector<int>(c+1,0));
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      int n;
      cin >> n;
      v[i][j] = n;
      v[i][c] += n;
      v[r][j] += n;
      v[r][c] += n;
    }
  }
  for(int i=0; i<=r; i++){
    for(int j=0; j<=c; j++){
      if(j != 0) cout << " ";
      cout << v[i][j];
    }
    cout << endl;
  }
  return 0;
}