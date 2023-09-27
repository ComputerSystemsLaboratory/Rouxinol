#include <iostream>
using namespace std;

int a[10][6];
int flag[10][5];

void revise(int h) {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < 5; j++) {
      if (flag[i][j]) a[i][j] = -1;
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < 5; j++) {
      if (a[i][j] == -1) {
	for (int k = i; k > 0; k--)
	  a[k][j] = a[k - 1][j];
	a[0][j] = 0;
      }
    }
  }
}

int search(int h) {
  int t = 0;
  for (int i = 0; i < h; i++) {
    int count = 0;
    int fig = 0;
    for (int j = 0; j < 5; j++) {
      if (a[i][j] == a[i][j + 1]) {
	count++;
	if (count == 2) {
	  fig = a[i][j];
	  flag[i][j - 1] = flag[i][j] = flag[i][j + 1] = 1;
	} else if (count > 2) flag[i][j + 1] = 1;
      }
      else if (!fig) count = 0;
      else break;
    }
    if (count >= 2) t += (count + 1) * fig;
  }
  return t;
}

void clear(int h) {
  for (int i = 0; i < h; i++)
    for (int j = 0; j < 5; j++)
      flag[i][j] = 0;
}

int main() {
  for ( ; ; ) {
    int h;
    cin >> h;
    if (h == 0) return 0;

    for (int i = 0; i < h; i++)
      for (int j = 0; j < 5; j++)
	cin >> a[i][j];

    for (int i = 0; i < h; i++)
      a[i][5] = 0;

    int point = 0;
    clear(h);
    for ( ; ; ) {
      int t = search(h);
      if (t == 0) break;
      point += t;
      revise(h);
      clear(h);
    }
    cout << point << endl;
  }
}