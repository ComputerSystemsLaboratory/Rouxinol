#include<bits/stdc++.h>
using namespace std;

int main()
{
  int N, A, B, C, X;
  while( cin >> N >> A >> B >> C >> X, N + A + B + C + X ) {
    int data[100];
    int flame = 0;
    int cnt = 0;
    for(int i=0; i<N; i++) cin >> data[i];
				       
    while( 1 ) {
      if( data[cnt] == X ) {
	cnt++;
      }
  
      if( cnt == N ) break;

      X = (A * X + B) % C;
      flame++;
      if( flame > 10000 ) break;
    }

    if( flame > 10000 ) cout << -1 << endl;
    else cout << flame << endl;
  }
}