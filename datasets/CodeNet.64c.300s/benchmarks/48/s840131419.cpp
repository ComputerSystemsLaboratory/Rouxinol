#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_N = 999999;
bool prime[MAX_N + 1];

void sieve()
{
  prime[0] = prime[1] = false;
  for(int i = 2; i <= MAX_N; ++i)
    prime[i] = true;
  for(int i = 2; i <= MAX_N; ++i)
    if(prime[i])
      for(int j = i * 2; j <= MAX_N; j += i)
	prime[j] = false;
}

int is_prime(int n)
{
  return prime[n];
}

int main()
{
  int n, i;
  int ans;
  sieve();
  while(cin >> n){
    ans = 0;
    for(i = 1; i <= n; i++){
      if(is_prime(i)){
	ans++;
      }
    }
    printf("%d\n", ans);
  }
}