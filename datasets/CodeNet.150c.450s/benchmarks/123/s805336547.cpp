#include <iostream>
using namespace std;
int isPrime(long long N){
  int i;
  if(N < 2) return false;
  if(N == 2) return true;
  else if(N % 2 == 0) return false;
  for(i = 3; i*i <= N; i+=2){
    if(N % i == 0) return false;
  }
  return true;
}

int main(){
  long long x, N, In;
  long long count = 0;
  cin >> N;
  for(x = 1; x <= N; x++){
    cin >> In;
    if(isPrime(In))
      count = count + 1;
  }
  cout << count << endl;
  return 0;
}
