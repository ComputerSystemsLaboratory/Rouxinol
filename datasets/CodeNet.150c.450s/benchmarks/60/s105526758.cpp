#include <iostream>
using namespace std;


int main(){
  int n;
  int u,k;
  int v;
  int map[100][100]={0};
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> u >> k;
    for(int j=0;j<k;j++){
      cin >> v;
      map[u-1][v-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << map[i][j];
      if(j<n-1){
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}