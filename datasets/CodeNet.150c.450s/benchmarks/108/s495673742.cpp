#include <iostream>
#include <queue>
using namespace std;

int D[100];
int mat[100][100];

void bfs(int src);

int main() {
  int n;
  for (int i=0;i<100;++i) {
    for (int j=0;j<100;++j)
      mat[i][j] = 0;
    D[i] = -1;
  }
  cin >> n;
  for (int i=0;i<n;++i) {
    int buf1,buf2;
    cin >> buf1 >> buf2;
    for (int j=0;j<buf2;++j) {
      int buf3;
      cin >> buf3;
      mat[i][buf3-1] = 1;
    }
  }
  bfs(0);
  for (int i=0;i<n;++i)
    cout << i+1 << " " << D[i] << endl;
}

void bfs(int src) {
  // cout << "bfs root = " << src << endl;
  queue<int> Q; // 整数を管理するキューの定義
  Q.push(src);
  D[src] = 0; // 出発点
  while (!Q.empty()) {
    int cur = Q.front(); // 先頭要素を取り出す
    Q.pop();
    // 動作確認用表示
    // cout << "visiting " << cur << " " << D[cur] << endl;
    for (int dst=0;dst<100;++dst) { // 各行き先 dst に対して
      if (mat[cur][dst]==1&&D[dst]==-1) {
	// cur から dst に辺があり, dst が未訪問なら
	D[dst] = D[cur]+1;
	Q.push(dst); // dst を訪問先に加える
      }
    }
  }
}