#include <iostream>

using namespace std;

int a, d, n;
bool prime[1000005];

int main(void)
{
  prime[1] = true;
  for(int i = 2; i <= 1000000; i++){
    if(prime[i]) continue;
    for(int j = 2*i; j <= 1000000; j+=i){
      prime[j] = true;
    }
  }

  while(1){
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0) break;

    for(int x = a; ; x += d){
      if(!prime[x]) n--;
      if(n == 0){
        cout << x << endl;
        break;
      }
    }
  }

  return 0;
}

