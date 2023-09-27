#include <bits/stdc++.h>
using namespace std;

int main() {
  long D;
  cin >> D;
  
  //減点量の入力
  long c[27];
  for(int i=1; i<26+1; i++){
    cin >> c[i];
  }
  
  //加点量の入力
  long s[D+1][26+1];
  for(int i=1; i<D+1; i++){
  for(int j=1; j<26+1; j++){
    cin >> s[i][j];
  }}
  
  //開催日程の入力
  long t[D+1];
  for(int i=1; i<D+1; i++){
    cin >> t[i];
  }
  
  //過去の最終開催日を保持する配列
  long past[26+1] = {0};
  
  //日々の処理
  long ans=0;
  for(int day=1; day<D+1; day++){
    
    //満足度の加点計算
    ans += s[day][t[day]];
    
    //開催日の更新
    past[t[day]] = day;
    
    //満足度の減点計算
    for(int num=1; num<26+1; num++){
      ans -= ( c[num] * (day - past[num]) );
    }
    
    //その日の終わりの満足度を出力
    cout << ans << endl;
  }

  return 0;
}
