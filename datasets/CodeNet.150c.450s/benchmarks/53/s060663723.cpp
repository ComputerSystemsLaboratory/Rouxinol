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
#include<queue>
using namespace std;

int main(void) {
  long long int n;
  cin >> n;
  long long int m = n;
  cout << n << ":";
  for(int i=2; i*i<m; i++){
    while( n % i == 0 ){
      n /= i;
      cout << " " << i;
    }
  }
  if( n != 1 ) cout << " " << n;
  cout << endl;

  return 0;
}





// EOF