#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n,ans,sum;
  scanf("%d",&n);
  while(n != 0){
    ans = 0;
    sum = 1000-n;
    
    while(sum >= 500){
      sum -= 500;
      ans++;
    }
    while(sum >= 100){
      sum -= 100;
      ans++;
    }
    while(sum >= 50){
      sum -= 50;
      ans++;
    }
    while(sum >= 10){
      sum -= 10;
      ans++;
    }
    while(sum >= 5){
      sum-=5;
      ans++;
    }
    while(sum != 0){
      sum--;
      ans++;
    }
    cout << ans << endl;
    scanf("%d",&n);
  }
  return 0;
}