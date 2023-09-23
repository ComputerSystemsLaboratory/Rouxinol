#include <bits/stdc++.h>

using namespace std;

int main()
{
  bool isPrime[1000001];
  int num, prime[1000001];
  for(int i = 0; i <= 1000000; i++) isPrime[i] = true;
  isPrime[0] = isPrime[1] = false;
  num = 0;
  for(int i = 2; i <= 1000000; i++){
    if(isPrime[i]){
      prime[num++] = i;
      for(int j = i+i; j <= 1000000; j += i) isPrime[j] = false;
    }
  }
  int a, d, n;
  while(cin >> a >> d >> n, a || d || n){
    int cnt = 0;
    int  A = a;
    while(cnt < n){
      if(isPrime[A]) cnt++;
      A += d;
    }
    cout << A - d << endl;
  }
  return 0;
}