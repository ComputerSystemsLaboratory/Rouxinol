#include<iostream>

using namespace std;

int main(){
  int n;
  int u[100];
  int A[100][100] = {};
  
  cin >> n;
  
  for(int i = 0;i < n;i++){
    int k;
    cin >> u[i] >> k;
    int v[k];
    for(int j = 0;j < k;j++){
      cin >> v[j];
      A[i][v[j] - 1] = 1;
    }
  }
  
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      if(j > 0) cout << " ";
      cout << A[i][j];
    }
    cout << "\n";
  }
  
  return 0;
}

