#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n,m;
  cin >> n >> m;
  vector<vector<int> > A(n,vector<int>(m,0));
  vector<int> b(m,0);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> A[i][j];
    }
  }
  for(int i=0; i<m; i++) cin >> b[i];
  for(int i=0; i<n; i++){
    int sum = 0;
    for(int j=0; j<m; j++){
      sum += A[i][j] * b[j];
    }
    cout << sum << endl;
  }
  return 0;
}