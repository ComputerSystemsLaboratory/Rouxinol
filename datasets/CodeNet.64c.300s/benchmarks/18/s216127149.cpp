#include <iostream>

int n;
int cmb;
int dp[31];

/*
int func(int now){
  if(now > n)
    return 0;
  if(now == n){
    dp[now] = 1;
    return 1;
  }


  return func(now+1) + func(now+2) + func(now+3);
}
*/

int func(int now){
  int a[3];
  if(now < 0){
    return 0;
  }
  if(now == 0){
    return 0;
  }
  if(now == 1){
    return 1;
  }
  if(now == 2){
    return 2;
  }
  if(now == 3){
    return 4;
  }

  for(int i=1; i <= 3; i++){
    if(dp[now-i] != -1){
      a[i-1] = dp[now-i];
    }else{
      a[i-1] = func(now-i);
      dp[now-i] = a[i-1];
    }
  }

  return a[0] + a[1] + a[2];

}

int main(void){
  while(1){
    int ans;
    std::cin >> n;

    for(int i=0; i < 31; i++){
      dp[i] = -1;
    }

    if(n == 0){
      return 0;
    }

    cmb = 0;
    ans = func(n);

    std::cout << ans / 10 / 365 + 1 << std::endl;
  }
}