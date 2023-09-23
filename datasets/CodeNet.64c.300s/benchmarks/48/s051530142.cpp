#include <iostream>
#include <cstdio>
using namespace std;
const int MAX_N = 1000000; // いくつまで調べるか
bool prime[MAX_N + 1]; // 添字が素数ならtrue、それ以外はfalse
void sieve()
{
  prime[0] = prime[1] = false; // 例外処理
  // 配列prime の初期化
  for(int i = 2; i <= MAX_N; ++i)
    prime[i] = true;
  // 素数でないものを調べる
  for(int i = 2; i <= MAX_N; ++i)
    if(prime[i])
      for(int j = i * 2; j <= MAX_N; j += i)
	prime[j] = false;
	}

int is_prime(int n)
{
  return prime[n];
  }

/*bool is_prime(int n)
{
  if(n == 1)return false;
  for(int i = 2; i < n; ++i)
    if(n % i == 0)return false;
  return true;
  }
*/
int main()
{
  sieve();
  int a;
  while(cin >> a){
    //cin >> a;
    //if(a==EOF)return 0;
    int count=0;
    //int tmp;
    for(int i=1;i<=a;i++){
      if(is_prime(i))count++;
    }
    printf("%d\n",count);
  }
}