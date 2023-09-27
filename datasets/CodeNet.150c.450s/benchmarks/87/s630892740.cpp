#include <iostream>
using namespace std;

// これは昔落ちものゲームを作ったことがあるので、事実上やったことがある。しかし忘れてしまった。即興で解くしかない。

int H;
int S[10][5];

int shokyo_1(int r) { // 消去部分に0を入れ、得点を返す
  for (int i=5; i>=3; i--) { // 消去個数
    for (int j=0; j<=5-i; j++) { // 判定開始地点
      int temp = S[r][j];
      bool ok = true;
      if (temp == 0) continue;
      for (int k=j; k<j+i; k++) {
	if (temp != S[r][k]) {
	  // cerr << "r = " << r << ", i = " << i << ", j = " << j << ", k = " << k << ", S[r][k] = " << S[r][k] << endl;
	  ok = false;
	  break;
	}
      }
      if (ok) {
	// cerr << "r = " << r << ", i = " << i << ", j = " << j << endl;
	for (int k=j; k<j+i; k++) {
	  S[r][k] = 0;
	}
	return temp * i;
      }
    }
  }
  return 0;
}

int shokyo() {
  int sum = 0;
  for (int i=0; i<H; i++) {
    sum += shokyo_1(i);
  }
  return sum;
}

void swap(int r_0, int c_0, int r_1, int c_1) {
  int temp1 = S[r_1][c_1];
  S[r_1][c_1] = S[r_0][c_0];
  S[r_0][c_0] = temp1;
  // cerr << "r_0 = " << r_0 << ", c_0 = " << c_0 << ", r_1 = " << r_1 << ", c_1 = " << c_1 << ", temp1 = " << temp1 << endl;
}

void tsumeru_1(int c) {
  for (int i=H-1; i>=1; i--) {
    // cerr << "i = " << i << endl;
    if (S[i][c] == 0) {
      for (int j=i-1; j>=0; j--) {
	// cerr << "j = " << j << endl;
	if (S[j][c] != 0) {
	  swap(i, c, j, c);
	  break;
	}
      }
    }
  }
}

void tsumeru() {
  for (int c=0; c<5; c++) {
    tsumeru_1(c);
  }
}

int main() {
  while (scanf("%d", &H) != EOF && H) {
    for (int i=0; i<H; i++) {
      for (int j=0; j<5; j++) {
	scanf("%d", &S[i][j]);
      }
    }
    int sum = 0;
    int temp;
    while (true) {
      temp = shokyo();
      if (temp == 0) break;
      /*cerr << "--now--" << endl;
      for (int i=0; i<H; i++) {
	for (int j=0; j<5; j++) {
	  cerr << S[i][j] << " ";
	}
	cerr << endl;
      }
      cerr << "--end--" << endl;*/
      sum += temp;
      tsumeru();
    }
    printf("%d\n", sum);
  }
}