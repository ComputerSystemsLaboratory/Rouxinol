// おせんべい
/*
  横10行以下なので、すべての裏返し方を全列挙。
  それぞれの場合に、出荷できるせんべいが最大になる縦の裏返し方を考える。
*/
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
const int MAX_R = 10;
const int MAX_C = 10000;
bool senbei[MAX_R][MAX_C];



int main() {
  while (true) {
    // 入力
    int r, c;
    cin >> r >> c;
    if (!(r | c))
      return 0;
    int buf;
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cin >> buf;
        if (buf) {
          senbei[i][j] = true;
        } else {
          senbei[i][j] = false;
        }
      }
    }

    // 計算
    // bitDPみたいに、2進法の数iと横r行のひっくり返し方を対応させる
    int cnt, cnt_r;
    int cnt_max = 0;
    int last = 1 << r;
    bool tate[MAX_R];
    for (int i = 0; i < last; i++) {
      cnt = 0;
      int k = i;
      for (int j = 0; j < r; j++) {
        // tate[j] = 1ならj行目をひっくり返す。0ならひっくり返さない。
        tate[j] = (k % 2 == 1) ? true: false;
        k /= 2;
      }
      for (int j = 0; j < c; j++) {
        cnt_r = 0;
        for (int l = 0; l < r; l++) {
          if (senbei[l][j] ^ tate[l])
            cnt_r++;
        }
        cnt += max(cnt_r, r - cnt_r);
      }
      cnt_max = max(cnt_max, cnt);
    }
    // 出力
    cout << cnt_max << endl;
  }
}