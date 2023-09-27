#include <bits/stdc++.h>
using namespace std;


int math(int a, int b, int c, int x){
  int ans;

  ans = (a * x + b) % c;

  return ans;
}

int main(){

  int N, A, B, C, X;

  while(cin >> N >> A >> B >> C >> X && (N || A || B || C || X)){

    int cnt = 0, Y[10000];
    int xx;
    int judge = 0;
    int s = 0;

    for(int i = 0; i < N; i++){
      cin >> Y[i];
    }
    int k = 1;
    xx = X;

    for(int j = 0; j <= 10000; j++){
      if(Y[cnt] == X){
	cnt++;
	X = math(A,B,C,X);
	judge = j;
	if(cnt == N){
	  cout << judge  << endl;
	  break;
	}
      }else {
	X = math(A,B,C,X);
      }
    }
    if(cnt != N) cout << -1 << endl;

  }

  return 0;
}