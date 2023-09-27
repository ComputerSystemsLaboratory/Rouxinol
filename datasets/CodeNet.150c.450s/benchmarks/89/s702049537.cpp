#include <iostream>
using namespace std;
#define MAX_N 1000000

bool isPrime[MAX_N+1];

int main(void){
  int a, d, n, cnt;
  for(int i = 0; i <= MAX_N; i++) isPrime[i] = true;
  isPrime[0] = isPrime[1] = false;
  for(int i = 2; i * i <= MAX_N; i++){
    if(!isPrime[i]) continue;
    for(int j = i * i; j <= MAX_N; j += i) isPrime[j] = false;
  }
  while(true){
    int i = 0;
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0) break;
    cnt = 0;
    while(true){
      if(isPrime[a + i * d]){
        if(++cnt == n) break;
      }
      i++;
    }
    cout << a + i * d << endl;
  }
  return 0;
}