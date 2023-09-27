#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数の準備。デッキの余分な50枚はカードを一時的に移して置くための場所
  int deck[100] = {}, num, times, p, c;

  while (cin >> num >> times && num) {  // デッキが0枚だったら終了

    // デッキの準備
    for (int i = 0; i < num; i++) {
      deck[i] = num - i;
    }

    // デッキにシャッフルの操作をtimes回する
    for (int i = 0; i < times; i++) {
      cin >> p >> c;

      // 先頭p-1枚を一時的に退避
      for (int j = 0; j < p - 1; j++) {
        deck[j + 50] = deck[j];
      }

      // 図の黄色の矢印の操作
      for (int j = 0; j < c; j++) {
        deck[j] = deck[j + p - 1];
      }

      // 退避させてたカードを戻す。図の青色の操作。
      for (int j = 0; j < p - 1; j++) {
        deck[c + j] = deck[j + 50];
      }
    }

    // デッキの一番上のカードを出力
    cout << deck[0] << endl;
  }
  return 0;
}

