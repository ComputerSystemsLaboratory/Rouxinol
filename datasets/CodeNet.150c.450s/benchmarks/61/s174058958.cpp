#include<bits/stdc++.h>
using namespace std;

int N,A,B,C,X;
int Y[111];
bool F[111];
int main(){
  while(  cin >> N >> A >> B >> C >> X && (N||A||B||C||X) ){
    for(int i=0;i<N;i++){
      cin >> Y[i];
    }
    memset(F,0,sizeof(F));
    int jd = 0;
    for(int i=0;i<=10000;i++){
      if( Y[jd] == X ) F[jd++] = true;

      X = (A * X + B ) % C;

      if( jd == N ){
	cout << i << endl; break;
      }
      if( i == 10000 ) cout << -1 << endl;
    }
  }
}