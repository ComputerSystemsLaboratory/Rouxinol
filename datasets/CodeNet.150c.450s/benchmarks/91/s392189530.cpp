#include <iostream>
#include <cstring>
using namespace std;

int prime[1000000];

int main()
{
  int n;
  for (int i = 0; i < 1e6; i++) prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i < 1000000; i++){
    if (prime[i] == 1){
      for (int j = 2 * i; j < 1000000; j += i){
        prime[j] = 0;
      }
    }
  }
  for (int i = 0; i < 1000000; i++){
    prime[i + 1] += prime[i];
  }
  while (cin >> n){
    cout << prime[n] << endl;
  }

  return 0;
}