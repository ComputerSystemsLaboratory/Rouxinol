#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long int num){
  if(num == 2){
    return true;
  }
  
  if(num < 2 || num%2 == 0){
    return false;
  }

  int i = 3;
  while(i <= sqrt(num)){
    if(num%i == 0){
      return false;
    }
    i += 2;
  }

  return true;
}

int main(){
  int n, cnt=0;
  cin >> n;

  for(int i = 0; i < n; i++){
    long long int num;
    cin >> num;
    if(isPrime(num)){
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}

