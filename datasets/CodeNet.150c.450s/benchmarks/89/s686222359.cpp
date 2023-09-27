#include <bits/stdc++.h>
using namespace std;
#define pMAX 1000000
bool is_prim[pMAX];

bool isPrim(int a){
  for(int i=2; i < sqrt(a); i++){
    if(a % i == 0) return false;
  }
  return true;
}

void eratosthenes(){
  for(int i=0; i < pMAX; i++){
    is_prim[i] = true;
  }
  is_prim[0] = false;
  is_prim[1] = false;
  for(int i=2; i < pMAX; i++){
    if(isPrim(i)){
      for(int j=i+i; j < pMAX; j+=i){
        is_prim[j] = false;
      }
    }
  }
}

int main(void){
  int a, d, n;
  eratosthenes();
  while(cin >> a >> d >> n, a | d | n){
    int cnt = 0;
    while(1){
      if(is_prim[a]){
        cnt++;
      }
      if(cnt == n){
        cout << a << endl;
        break;
      }
      a += d;
    }
  }
  return 0;
}