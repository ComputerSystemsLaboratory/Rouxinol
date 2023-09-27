#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
using namespace std;

vector<bool> isPrime(long long int n){
  vector<bool> p(n+1, true);
  p[1] = false;
  p[0] = false;
  for(int i=2; i<=sqrt(n); i++){
    if( !p[i] ) continue;
    for(int j=i*2; j<=n; j+=i){
      p[j] = false;
    }
  }
  return p;
}

int main(void) {

  int n;
  cin >> n;
  vector<bool> p = isPrime(100000000);


  int cnt = 0;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    cnt += p[tmp];
  }
  cout << cnt << endl;


  return 0;
}