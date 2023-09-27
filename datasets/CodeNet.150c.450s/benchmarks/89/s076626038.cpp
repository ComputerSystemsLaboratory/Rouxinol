#include <iostream>
using namespace std;

const int MAX_N = 1000000;
bool prime[MAX_N + 1];

void sieve()
{
  prime[0] = prime[1] = false;
  for(int i = 2; i <= MAX_N; i++)
    prime[i] = true;
  for(int i = 2; i <= MAX_N; i++)
    if(prime[i])
      for(int j = i * 2; j <= MAX_N; j += i)
	prime[j] = false;
}

int main()
{
  sieve();
  int a, d, n, ans;
  while(1){
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0){
      break;
    }else{
      for(int i = 0, j = 0;; i++){
	if(prime[a + i * d]){
	  if(++j == n){
	    cout << a + i * d << endl;
	    break;
	  }
	}
      }
    }
  }
}