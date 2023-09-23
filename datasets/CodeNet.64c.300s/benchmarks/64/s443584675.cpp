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

long long int gcd(long long int a, long long int b){
  long long int c;
  while( a != 0 ){
    c = a;
    a = b%a;
    b = c;
  }
  return b;
}

int main(void) {

  int a, b;
  cin >> a >> b;

  cout << gcd(a, b) << endl;

  return 0;
}