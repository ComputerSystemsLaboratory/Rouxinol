#include <bits/stdc++.h>
using namespace std;

int main(){

  int N, M, P;

  while(cin >> N >> M >> P && (N || M || P)){

    int sum = 0;
    int maisu = 0, win = -1;
    

    for(int i = 1; i <= N; i++){
      cin >> maisu;
      sum += maisu;
      if(i == M) win = maisu;
    }
    if(win == 0) cout << 0 << endl;
    else    cout << ((sum * 100 * (100 - P)) / 100) / win << endl;
    win = -1;
    maisu = 0;
    sum = 0;
  }

  return 0;
}