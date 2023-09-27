#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int N, A, B, C, X, L[100];
  while(cin >> N >> A >> B >> C >> X , N){
    for(int i = 0 ; i < N ; i++ ) cin >> L[i];
    int cnt = 0;
    for(int i = 0 ; i < 10001 ; i++ ){
      if(L[cnt] == X) cnt++;
      if(cnt >= N){
	cout << i << endl;
	break;
      }
      X = ( A * X + B ) % C;
    }
    if(cnt < N) cout << -1 << endl;
  }
}