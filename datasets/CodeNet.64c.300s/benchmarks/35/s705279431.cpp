#include<iostream>

using namespace std;

int main(){
  int n,u,m,c;
  int b[1000][1000] = {};
  int a[1000][1000] = {};

  cin >> n;//点の数を入力する

  for(int i = 1;i <=n ;i++){
    cin >> u >> m;//次数を入力する
    for(int j = 1;j <= m;j++){
      cin >> b[u][j];//b[点の番号][接続先]
    }
  }

  for(int i = 1;i <= n;i++){
    for(int j = 1;j <= n;j++){
      if(b[i][j] != 0){
	c = b[i][j];
	a[i][c] = 1;
      }
      if(j != n){
	cout << a[i][j] << " ";
      }else{
	cout << a[i][j] << endl;
      }
    }
  }
  return 0;
}

