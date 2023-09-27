#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
  int n,m,l;
  cin >> n >> m >> l;
  vector<vector<int> > A(n,vector<int>(m,0));
  vector<vector<int> > B(m,vector<int>(l,0));
  for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> A[i][j];
  for(int j=0; j<m; j++) for(int k=0; k<l; k++) cin >> B[j][k];
  for(int i=0; i<n; i++){
    for(int k=0; k<l; k++){
      long long sum = 0;
      for(int j=0; j<m; j++) sum += A[i][j] * B[j][k];
      if(k != 0) cout << " ";
      cout << sum;
    }
    cout << endl;
  }
  return 0;
}