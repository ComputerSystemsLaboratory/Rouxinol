#include <iostream>

using namespace std;

int a[124][124] = {{}};
int start[124] = {};
int e[124] = {};
int c = 0;
int n;
void dfs(int k){
  if(start[k] != 0) return;
  c++;
  start[k] = c;

  for(int i = 0;i < n;i++){
    if(a[k][i] == 1){
      dfs(i);
    }
  }
  c++;
  e[k] = c;
}
int main(){

  int u,k,x;
  cin >> n;



  for(int i = 0;i < n;i++){
    cin >> u >> k;
    for(int j = 0;j < k;j++){
      cin >> x;
      a[u - 1][x - 1] = 1;
    }
  }


  for(int i = 0;i < n;i++)  dfs(i);

  for(int i = 0;i < n;i++){
    cout << i + 1 << " " << start[i] << " " << e[i] << endl;
  }
}