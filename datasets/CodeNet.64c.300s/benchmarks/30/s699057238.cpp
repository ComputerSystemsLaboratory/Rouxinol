#include <iostream>
using namespace std;
int main(){
  int n;
  int c[] = {500,100,50,10,5,1};

  while( cin >> n ,n ){
    n = 1000-n;
    int ans = 0;
    for( int i=0;i<6;i++ ){
      if( n >= c[i] ){
	ans += n / c[i];
	n = n% c[i];
      }
    }
    cout << ans << endl;
  }
}