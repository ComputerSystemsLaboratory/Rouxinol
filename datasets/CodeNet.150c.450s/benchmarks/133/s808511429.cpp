#include <bits/stdc++.h>
using namespace std;

int main() {

int D;
cin >> D ;

int c[26+1]; //満足度の下がりやすさ
for(int i = 1; i < 26+1 ; i++){
  cin >> c[i];
}

int s[D+1][26+1]; //満足度の増加量(D日目,タイプ)
for(int i = 1; i < (D+1); i ++){
  for(int j = 1; j <26+1; j++){
    cin >> s[i][j];
  }
}

int S = 0; //満足度

int t[D+1]; //d日目に開催するコンテストのタイプ
for(int i = 1; i < (D+1); i++){
    cin >> t[i];
}

int last[26+1] = {};//最後にコンテストを開催した日

for(int d=1; d < (D+1); d++){
  S += s[d][t[d]];
  last[t[d]] = d;
  for(int i=1; i < 26+1; i++){
      S -= c[i] * (d - last[i]);
  }
  cout << S <<endl;
}

return 0;
}