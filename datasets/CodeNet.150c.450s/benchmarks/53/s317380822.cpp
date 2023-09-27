#include<iostream>
using namespace std;

int root(int n){
  long long t = n;
  while(1) {
    t = (t*t+n)/(2*t);
    if (t*t <= n) return (int)t;
  }
}
int main(){
  int n, i = 5, r, m = 0;;

  cin >> n;
  cout << n << ":";
  while(n%2 == 0){
    n /= 2;
    cout << " " << 2;
  }
  if (n == 1){cout << endl; return 0;}
  while(n%3 == 0){
    n /= 3;
    cout << " " << 3;
  }
  if (n == 1){cout << endl; return 0;}
  
  r = root(n);
  while(i <= r){
    if (n%i == 0) {
      cout << " " << i;
      n /= i;
      r = root(n);
    }
    else {if (m ^= 1) i += 2; else i += 4;}
  }
  cout << " " << n << endl;
  return 0;
}