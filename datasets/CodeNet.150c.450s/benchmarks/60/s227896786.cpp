#include <iostream>

using namespace std;

int main(){
  int g[1001][1001]={{0}};//要素を0で初期化
  int n,a,b,c;
  cin >> n;
  // for (int i = 0; i < n; ++i)
  // {
  //   for (int j = 0; j < n; ++j)
  //   {
  //     g[i][j]=0;
  //   }
  // }
  for (int i = 0; i < n; ++i)
  {
    cin >> a >> b ;
    for (int i = 0; i < b; ++i)
    {
      cin >> c;
      g[a-1][c-1]=1;/* code */
    }
  }
  for (int i = 0; i < n; ++i)
  {
     for (int j = 0; j < n; ++j)
     {
      if (j==n-1)
      {
        cout << g[i][j] << endl;
      }else{
        cout << g[i][j] <<" ";
      }
     }
  }

}