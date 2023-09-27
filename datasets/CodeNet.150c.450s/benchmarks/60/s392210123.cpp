#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  
  int n, u, k, v;
  bool a[110][110] = {}; //adjacency matrix

  //input
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      cin >> v;
      a[u][v] = true;
    }
  }

  //output
  for(int i = 1;i <= n;i++){
    for(int j = 1;j <= n;j++){
      cout << (j - 1?" ":"");
      cout << a[i][j];
    }
    cout << endl;
  }
  
  return 0;
}


