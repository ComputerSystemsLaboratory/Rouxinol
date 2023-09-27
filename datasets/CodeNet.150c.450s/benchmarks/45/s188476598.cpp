#include <iostream>
using namespace std;
typedef unsigned long long ullong;

#define M 1000000007

ullong pow(ullong m, ullong n){
  if(n == 0)
    return 1;
  if(n%2 == 0)
    return (pow((m*m)%M, n/2))%M;
  else
    return (pow((m*m)%M, n/2)*m)%M;
}

int main(void){
  ullong m, n;
  cin >> m >> n;

  cout << pow(m, n) << endl;

  return 0;
}