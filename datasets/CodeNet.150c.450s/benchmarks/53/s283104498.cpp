#include <iostream>
using namespace std;
int main(){
  long n;
  cin >> n;
  long x=n;
  cout << x << ":";int c=0;
  long k = 1;

  int i = 2;
  while(i*i<=n && k < n) {
    if (x % i == 0) {cout << " " << i;k*=i;x/=i;c++;}
    if (x % i != 0) {i++;}
  }
  if (k!=n) {
    cout << " " <<n/k;
  }


  cout << endl;
  return 0;
}