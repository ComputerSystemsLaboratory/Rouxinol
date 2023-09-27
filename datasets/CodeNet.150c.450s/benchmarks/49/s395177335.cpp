#include <bits/stdc++.h>
using namespace std;

int main(){

 
  while(1){
    int score = 0, n, max = INT_MIN, min = INT_MAX, ava = 0, cnt = 0;

    cin >> n;
    if(n == 0) break;

    for(int i = 0; i < n; i++){
      cin >> score;
      ava += score;
      if(score > max) max = score;
      if(score < min) min = score;
  }
    cout << (ava - max - min) / (n - 2) << endl;
  }

  return 0;
}