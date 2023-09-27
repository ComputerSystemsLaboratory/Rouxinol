#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N, M;
  map<string, bool> m;

  cin >> N;
  for(int i=0; i<N; i++) {
    string U;
    cin >> U;
    m[U] = true;
  }

  cin >> M;
  int state = 0;
  for(int i=0; i<M; i++) {
    string T;
    cin >> T;
    if( m[T] && state == 0 ) cout << "Opened by " << T << endl, state = 1;
    else if( m[T] && state == 1 ) cout << "Closed by " << T << endl, state = 0;
    else cout << "Unknown " << T << endl;
  }
  
}