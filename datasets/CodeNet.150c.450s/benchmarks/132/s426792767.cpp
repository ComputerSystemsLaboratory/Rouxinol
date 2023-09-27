#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, p;
  while( cin >> n >> p, n && p ) {
    int stone[50] = {0};
    int cnt = 0;
    int P = p;
    
    while( 1 ) {
      if( p == 0 ) {
	p = stone[cnt];
	stone[cnt] = 0;
      } else {
	stone[cnt] ++;
	p --;
      }
      if( stone[cnt] == P ) break;
      cnt++;
      if( cnt == n ) cnt = 0;
    }

    cout << cnt << endl;
  }
}