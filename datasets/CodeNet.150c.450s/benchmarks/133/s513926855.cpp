# include<iostream>
# include<vector>
using namespace std;
using vector1 = vector<int>;
using vector2 = vector<vector1>;
int last(int d, int j, vector1 t){ //タイプjのコンテストが最後に開催された日を計算
  for(int i=d; i>=1; i--){
    if(t[i] == j) return i;
  }
  return 0;
}
int penalty(vector1 c, int d, vector1 t){
  int m = 0;
  for(int i=1; i<=26; i++){
    m += c[i] * (d - last(d, i, t));
  }
  return m;
}
int main(){
  int D; cin >> D;
  vector1 c(26+1, 0); for(int i=1; i<=26; i++) cin >> c[i]; //ペナルティーc
  vector2 s(D+1, vector1(26+1)); //満足度s
  for(int i=1; i<=D; i++){
    for(int j=1; j<=26; j++){
      cin >> s[i][j];
    }
  }
  vector1 t(D+1, 0); for(int i=1; i<=D; i++) cin >> t[i];

  vector1 v(D+1, 0);
  for(int i=1; i<=D; i++){
    v[i] = s[i][t[i]];
    v[i] -= penalty(c, i, t);
  }

  int sum = 0;
  for(int i=1; i<=D; i++){
    sum += v[i];
    cout << sum <<"\n";
  };
  return 0;
}