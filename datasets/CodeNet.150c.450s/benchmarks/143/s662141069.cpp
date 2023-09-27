#include <bits/stdc++.h>
using namespace std;
//NOT TO SUBMIT IN WRONG PLACE OR BY WRONG COMPILER
//ABC 171, task d, 2020/09/02
//ms,
/*
*/

int main(void){
  int N, Q;
  vector<int> a(100001);
  int64_t ans=0;

  cin >>N;
  for(int i=0;i<=100000;i++) a[i]=0;
  for(int i=0;i<N;i++){
    int tmp_a;
    cin>>tmp_a;
    a[tmp_a]++;
    ans+=tmp_a;
  }

  cin >>Q;
  for(int i=0;i<Q;i++){
    int b, c;
    cin >>b >>c;

    ans += (c-b)*a[b];
    cout <<ans<<endl;

    a[c] += a[b];
    a[b] = 0;
  }


  return 0;
}
/*
愚直にやると、10^5個の成分に行う処理を10^5回やるため、10^10回の操作。
これは無理。
mapでとっておけば検索がlogNオーダーになるから全体NlogN+Qでよくない？
→いいっちゃいいんだけど、線形オーダーの解がある。お前はmapが好きすぎ。

前回もmap使ったしね。今回は模範解答のやつを実装しよう。
mapのkeyにしてた分をvectorの添え字で管理する。
*/
