#include<bits/stdc++.h>
using namespace std;

vector<int> primes;

/*void sieve(){
  int n = 1e6;
  bool isPrime[n + 1] = {false};
  isPrime[] = true;
  isPrime[1] = true;
  for(int i = 2; i <= 1e6; i++){
    if(!isPrime[i]){
      primes.push_back(i);
     for(int j = i; j <= n; j += i){
        isPrime[j] = true;
      }
    }
  }
}
*/

bool isPrime(long long a){
  if(a == 2)return true;
  if(a < 2 || a % 2 == 0)return false;
  int i = 3;
  while(i <= sqrt((double)a)){
    if(a % i == 0)return false;
    i += 2;
  }
  return true;
}

int main(){
  int a, d, n;
  while(cin >> a >> d >> n, a || d || n){
    int num;
    int cnt = 0;
    for(int i = 0; ; i++){
      num = a + i * d;
      if(isPrime(num))cnt++;

      if(cnt == n){
        cout << num << endl;
        break;
      }
    }
  }
}