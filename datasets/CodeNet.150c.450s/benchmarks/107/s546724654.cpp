#include <iostream>
#include <string>
using namespace std;
int LP[1005][1005]={};

int main() {
  int j,k;
  string x,y;
  cin >> x >> y;
  for(j=1;j<=x.size();j++) LP[j][0] = j;
  for(k=1;k<=y.size();k++) LP[0][k] = k;

  //aをbに近づけたい!
  for(j=1;j<=x.size();j++) {
    for(k=1;k<=y.size();k++) {
      //a[j]を削除するか、a[j+1]にb[k]と同じ文字を挿入するか
      //上記２つの行為の回数で最小な方を採用
      int m = min(LP[j-1][k]+1, LP[j][k-1]+1);
      if(x[j-1] == y[k-1]) {
        //最後の文字が同じだから最後の文字がなくても編集距離は同じ
        m = min(m,LP[j-1][k-1]);
        LP[j][k] = m;
      }else {
        //最後の文字を置換する
        m = min(m,LP[j-1][k-1]+1);
        LP[j][k] = m;
      }
    }
  }
  cout << LP[x.size()][y.size()] << endl;
  return 0;
}
