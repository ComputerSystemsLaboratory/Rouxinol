#include<bits/stdc++.h>
using namespace std;

int N;
int S;

int main(){
  while( cin >> N ){
    if( !N ) break;
    int nmax = -1000;
    int nmin  = 2000;
    int sum = 0;
    for(int i=0;i<N;i++){
      cin >> S;
      nmax = max( nmax, S );
      nmin = min( nmin,S );
      sum += S;
    }
    sum -= nmax + nmin;
    cout << sum/(N-2) << endl;
  }
}