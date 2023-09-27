#include <queue>
#include <iostream>
using namespace std;

int D[100];
int a[100][100];

int main() {
  for (int i = 0; i < 100; i++){
    for (int j = 0; j < 100; j++){
	  a[i][j] = 0;
	  }
	 }
	int n,u,k,v;
	cin >> n;
	for (int i = 0; i < n; i++) {
	  cin >> u >> k;
	  for (int j = 0; j < k; j++) {
	    cin >> v;
		a[u][v] = 1;
		}
	  }
queue<int> Q; //整数を管理するキューの定義
  for (int i = 1; i < n+1; i++){
   D[i] = -1;
   }
  int src = 1;
  Q.push(src);
  D[src] = 0; //出発点
  while (! Q.empty()) {
    int cur = Q.front(); //先頭要素を取り出す
	Q.pop();
	for(int dst = 1 ; dst <= n; dst++) { //各行き先dstに対して
	if((a[cur][dst] == 1 && D[dst] == -1)) { //curからdstに辺があり、dstが未訪問なら
	      D[dst] = D[cur] + 1; //
		    Q.push(dst); //dstを訪問先に入れる
			}
		  }
		}
	for (int i=1; i < n+1; i++){
	  cout << i << " " << D[i] << endl;
	  }
	}