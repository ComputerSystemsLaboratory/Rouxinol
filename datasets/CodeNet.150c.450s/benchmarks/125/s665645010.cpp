#include <iostream>

using namespace std;

int V[101][101];
int n;

int d[101];
int f[101];

int t = 1;
void dfs(int src){
  t++;
  for(int i=1;i<=n;i++){
    if(V[src][i] != 0 && !d[i]){
      d[i] = t;
      dfs(i);
      t++;
    }
  }
  f[src] = t;
}
int main(){
  int  src, dst, num, non_visited;
  cin >> n;
  for(int i=1;i<=n;i++){
    d[i] = 0; f[i] = 0;
  }
  for(int i=1;i<=n;i++){
    cin >> src >> num;
    for(int j=0;j<num;j++){
      cin >> dst;
      V[src][dst] = 1;
    }
  }
  non_visited = 1;
  do{
    d[non_visited] = t;
    dfs(non_visited);
    non_visited = 0;
    for(int i=1;i<=n;i++){
      if(!d[i]){
        non_visited = i;
        break;
      }
    }
    t++;
  }while(non_visited);

  for(int i=1;i<=n;i++){
    cout << i <<" "<< d[i] <<" "<< f[i] << endl;
  }
  return 0;
}