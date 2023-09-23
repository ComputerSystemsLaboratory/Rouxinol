#include <iostream>
using namespace std;
static const int MAX = 999999;

bool isPrime[MAX + 1];
int numPrime[MAX + 1];

void calcPrime(){
  for(int i = 0; i <= MAX; i++)
    isPrime[i] = true;
  isPrime[0] = isPrime[1] = false;
  for(int i = 0; i * i <= MAX; i++){
    if(isPrime[i]){
      for(int j = i * 2; j <= MAX; j += i)
        isPrime[j] = false;
    }
  }
  int sum = 0;
  for(int i = 0; i <= MAX; i++){
    if(isPrime[i])
      sum++;
    numPrime[i] = sum;
  }
}

int main(){
  int n;
  calcPrime();
  while(cin >> n){
    cout << numPrime[n] << endl;
  }
}