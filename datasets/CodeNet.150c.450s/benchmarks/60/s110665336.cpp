#include<iostream>
using namespace std;
int main(void){
  int m[100][100];
  int n, u, k, v;
  cin >> n;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      m[i][j]=0;
    }
  }

  for(int i=0; i<n; i++){
    cin >> u >> k;
    u--;
    for(int j=0; j<k; j++){
      cin >> v;
      v--;
      m[u][v]=1;
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(j)cout << " ";
      cout << m[i][j];
    }
    cout << endl;
  }

  return 0;
}