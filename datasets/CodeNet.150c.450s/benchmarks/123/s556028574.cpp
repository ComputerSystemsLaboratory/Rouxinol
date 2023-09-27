#include <bits/stdc++.h>
using namespace std;

int judgeprime(int);

int main(){
  int n, num;
  int flg,cnt = 0;
  int i;

  cin >> n;

  for(i = 0 ; i < n ; i++){
    cin >> num;
    flg = judgeprime(num);
    if(flg == 1){
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;

  }

int judgeprime(int num){
  int n = 3;
  if(num == 2){
    return 1;
  }else if(num == 1 || num%2 == 0){
    return 0;
  }

  while(n <= sqrt(num)){
    if(num % n == 0){
      return 0;
    }
    n+=2;
  }
  return 1;
}