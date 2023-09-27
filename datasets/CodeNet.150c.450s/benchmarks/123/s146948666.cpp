#include<iostream>
#include<cmath>

using namespace std;

bool isprime(long int n){
  for(int i = 2 ; i <= sqrt(n); i++){
    if(n % i == 0)
      return false;
  }
  return true;
}

int main(){
  int N, count = 0;
  cin >> N;
  while(N--){
    int m;
    cin >> m;
    if(isprime(m))
      count++;
  }
  cout << count << endl;
  return 0;
}