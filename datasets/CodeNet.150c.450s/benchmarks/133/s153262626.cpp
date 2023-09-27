#include<bits/stdc++.h>
#define rep(i,n) for (int i =0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  int D;
  cin >> D;
  vector<int>C(26); //Cには，各コンテストの満足度の下がりやすさが入っている。
  rep(i,26)cin >> C[i];
  
  int S[D][26];
  rep(i,D){
    rep(j,26)cin >> S[i][j];
  }
  
  vector<int>T(D);
  rep(i,D)cin >> T[i];
  
  //↑ここまで入力
  
  vector<int>Last_d(26,0); //ここには最後にコンテストした日が入る 0で初期化
  
  int score =0;
  rep(d,D){ //D日間すべてを見ていく.
    //最初に開いたコンテストぶん点数を加算する
    score += S[d][T[d]-1];
    Last_d[T[d]-1] = d+1; //日付更新
    
    rep(i,26){ //26種のコンテストについて,点数を減算する
      score -= C[i] * (d+1 - Last_d[i]);
    }
    cout << score << endl;
  }
  
  
  
  
}