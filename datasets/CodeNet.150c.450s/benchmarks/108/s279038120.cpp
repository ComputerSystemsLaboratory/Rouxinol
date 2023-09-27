#include <iostream>
#include <queue>

using namespace std;

int D[100100];//始点からの距離を入れる

int g[1001][1001]={{0}};//要素を0で初期化
void bfs(int src,int n){//srcは開始位置この場合だと頂点1だから0
  // cerr << "bfs_root = " << src << endl;
  queue<int> Q;
  Q.push(src);
  D[src] = 0;
  while (! Q.empty()  ){
    int cur = Q.front();
    Q.pop();
    // cerr << "visiting_" << cur << " " <<D[cur] <<endl;
    for(int dst= 0; dst < n; dst++){
      if(g[cur][dst]==1 && D[dst]==0){
        D[dst]=D[cur]+1;
        Q.push(dst);
      }
    }
  }
}
void ans(int n){
  cout << 1 <<" "<< 0 <<endl;
  for (int i = 1; i < n; ++i)
  {
    if(D[i]==0){
      cout << i+1 << " "<< -1 <<endl;
    }else{
      cout << i+1 <<" "<< D[i]<<endl;
    }
  }

}

int main(){
  // int g[1001][1001]={{0}};//要素を0で初期化
  int n,a,b,c;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    cin >> a >> b ;
    for (int i = 0; i < b; ++i)
    {
      cin >> c;
      g[a-1][c-1]=1;/* code */
    }
  }
  bfs(0,n);
  ans(n);
  // for (int i = 0; i < n; ++i)
  // {
  //    for (int j = 0; j < n; ++j)
  //    {
  //     if (j==n-1)
  //     {
  //       cout << g[i][j] << endl;
  //     }else{
  //       cout << g[i][j] <<" ";
  //     }
  //    }
  // }


}