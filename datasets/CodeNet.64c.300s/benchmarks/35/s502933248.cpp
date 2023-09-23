#include <iostream>
using namespace std;
int main(){
  int n,a,b,c;
  int G[200][200];

  cin >> n;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      G[i][j] = 0;
    }
  }
  for(int i = 0 ; i < n ; i++){
    cin >> a >> b;
    a--;
    for(int i = 0 ; i < b ; i++){
      cin >> c;
      c--;
      G[a][c] = 1;
    }
  }
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      if(j == 0)cout << G[i][j];
      else cout <<" "<< G[i][j];
    }
    cout << endl;
  }
  return 0;
}