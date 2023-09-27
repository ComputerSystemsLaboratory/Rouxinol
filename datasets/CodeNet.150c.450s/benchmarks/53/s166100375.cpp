#include <iostream>
#include <vector>
#include <cmath>
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, s, n) for(int i = s; i < n; i++)
using namespace std;

int main(){
  int n;
  cin >> n;
  int m = sqrt(n);
  int num = n;
  cout << n << ':';
  rep2(i, 2, m+1){
    while(num%i==0){
      num /= i;
      cout << ' ' << i;
    }
  }
  if (num != 1) cout << ' ' << num;
  cout << endl;
  
  return 0;
}
