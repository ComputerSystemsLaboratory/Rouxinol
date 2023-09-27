#include <iostream>
using namespace std;

long long pow(long long m, long long n, long long p){
  if(n==1) return m%p;
  if(n%2==0) return pow((m*m)%p,n/2,p);
  return (pow((m*m)%p,(n-1)/2,p)*m)%p;
}

int main(){
  long long m,n;
  cin >> m >> n;
  cout << pow(m,n,1000000007) << endl;

  return 0;
}