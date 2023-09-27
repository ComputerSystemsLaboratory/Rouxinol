#include<bits/stdc++.h>
using namespace std;

int N,M,P;
int X[111];
int main(){
  while( cin >> N >> M >> P && (N||M||P) ){
    int sum = 0;
    for(int i=0;i<N;i++) {
      cin >> X[i];
      sum += X[i];
    }
    sum*=100;
    sum*=(100-P);
    if( X[M-1] == 0 ) cout << 0 << endl;
    else {
      sum/=X[M-1];
      sum/=100;
      cout << sum << endl;
    }
  }
}