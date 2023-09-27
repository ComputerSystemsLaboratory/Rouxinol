#include <iostream>

using namespace std;

int p(int i){
  return i * (i + 1) * (i + 2) / 6;
}

int main(void){
  int n = 1000000;
  /* ???????¨??????? */
  int ans1[n+1];
  int ans2[n+1];
  for(int i = 1 ; i < n + 1 ; i++){
    ans1[i+1] = -1;
    ans2[i+1] = -1;
  }

  for(int i = 1 ; p(i) < n + 1 ; i++){
    ans1[p(i)] = 1;
    if(p(i) % 2 == 1){ ans2[p(i)] = 1; }
  }

  for(int i = 2 ; i <= n ; i++){
    if(ans1[i] == 1){
    }else{
      int min = 10000;
      for(int j = 1 ; p(j) < i ; j++){
        if(min > 2 && ans1[i - p(j)] + 1 < min){
          min = ans1[i - p(j)] + 1;
        }
      }
      ans1[i] = min;
    }
  }

  for(int i = 2 ; i <= n ; i++){
    if(ans2[i] == 1){
    }else{
      int min = 10000;
      for(int j = 1 ; p(j) < i ; j++){
        if(min > 2 && p(j) % 2 == 1 && ans2[i - p(j)] + 1 < min){
          min = ans2[i - p(j)] + 1;
        }
      }
      ans2[i] = min;
    }
  }

  while(1){
    cin >> n;
    if(n == 0){return 0;}
    cout << ans1[n] << " " << ans2[n] << endl;
  }
}