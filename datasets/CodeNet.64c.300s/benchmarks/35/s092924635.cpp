#include <iostream>
using namespace std;
#define MAX 100

int main(){
  int n,u,k,v;
  int i,j;
  int A[MAX][MAX];
  cin >> n;
  for(i = 0; i < n; i++){
    for(j = 0; j< n; j++){
      A[i][j] = 0;
    }
  }
  for(i = 0; i < n; i++){
    cin >> u;
    cin >> k;
    u = u-1;
    for(j = 0; j < k; j++){
      cin >> v;
      v = v-1;
      A[u][v] = 1;
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(0 < j){
        cout << " ";
      }
      cout << A[i][j];
    }
    cout << endl;
  }
  return 0;
}