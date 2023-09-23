#include <iostream>
using namespace std;
const int MAX = 1000001;

int main(){
  //素数を作る
  int prime[MAX] = {0};
  for(int i = 0; i < MAX; i++) prime[i] = 1;
  prime[0] = 0;
  prime[1] = 0;
  for(int i = 2; i < MAX; i++){
    if(prime[i]){
      for(int j = i * 2; j < MAX; j += i){
	prime[j] = 0;
      }
    }
  }

  //数をもらってn番目を選ぶ
  int a, d, n;
  while(1){
    cin >> a >> d >> n;
    if(a == 0 || d == 0 || n == 0) break;
    int i = a;
    for(int j = 0; ; i += d){
      if(prime[i]) j++;
      if(j >= n) break;
    }

    //表示
    cout << i << endl;
  }

  return 0;
}