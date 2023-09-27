#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0;i < (int)n;i++)


int main(){
  int N,A,B,C,X;
  int Y[110];

  while(1){
    cin >> N >> A >> B >> C >> X;
    if(N == 0)break;
    rep(i,N){
      cin >> Y[i];
    }
    int i=0,ans=0;
    while(ans != 10001){
      if(Y[i] == X){
	i++;
      }
      if(i == N) break;
      X = (A*X+B) % C;
      ans++;
    }
    if(i == N) cout << ans <<endl;
    else cout << "-1\n";
  }
  return 0;
}