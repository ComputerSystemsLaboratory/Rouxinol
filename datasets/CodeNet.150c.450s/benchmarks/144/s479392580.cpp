// 1_7_D
#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, m, l, i, j, k;
  cin >> n >> m >> l;
  vector< vector<int> > A(n, vector<int>(m, 0));
  vector< vector<int> > B(m, vector<int>(l, 0));
  vector< vector<long> > C(n, vector<long>(l, 0));

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      cin >> A[i][j];
    }
  }
  for(j = 0; j < m; j++){
    for(k = 0; k < l; k++){
      cin >> B[j][k];
    }
  }

  for(i = 0; i < n; i++){
    for(k = 0; k < l; k++){
      for(j = 0; j < m; j++){
        C[i][k] += A[i][j] * B[j][k];
      }
    }
  }

  for(i = 0; i < n; i++){
    for(k = 0; k < l; k++){
      if(k != 0) cout << " ";
      cout << C[i][k];
    }
    cout << endl;
  }
  return 0;
}