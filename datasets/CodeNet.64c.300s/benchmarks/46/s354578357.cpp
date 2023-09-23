#include<iostream>
#include<cstdio>

using namespace std;
#define MAX 1000000

int main(){
  int i, n, a, b, cnt;
  bool prime[MAX];
  for(i = 0;i <= MAX; i++) prime[i] = true;
  prime[0] = prime[1] = false;
  
  for(i=2;i<MAX;i++){
    if(prime[i]){
      for(int j = i*2; j < MAX; j += i){
	prime[j] = false;
      }
    }
  }
  while(cin >> a >> b >> n, n != 0 ) {
    
    cnt = 0;
    for(i = a; i < MAX; i += b) {
      if(prime[i] == true)
	cnt++;
      if(cnt == n) break;
    }
    cout << i << endl;
  }
  return 0;
}