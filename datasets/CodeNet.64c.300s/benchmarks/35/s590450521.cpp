#include <iostream>

using namespace std;



int main(){

  int n,u,k,x;
  int array[124][124] = {{}};
  cin >> n;



  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      cin >> x;
      array[u - 1][x - 1] = 1;
    }
  }
  for (int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      if(j == n - 1) cout << array[i][j];
      else cout << array[i][j] << " ";
    }
    cout << endl;
  }
}