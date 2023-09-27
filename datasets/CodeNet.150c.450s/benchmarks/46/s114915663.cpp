#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
using namespace std;


int main(void) {

  int n, x;
  while(cin >> n >> x){
    if( n == 0 && x == 0 ) break;

    long long int cnt = 0;
    for(int i=1; i<=n; i++){
      for(int j=i+1; j<=n; j++){
        if( i >= x - i - j || j >= x - i - j ) continue;
        if( x - i - j <= n && x - i - j > 0 ) cnt++;
      }
    }
    cout << cnt << endl;
  }


  return 0;
}