#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, A, B, C, X;
  while(cin >> N >> A >> B >> C >> X , N | A | B | C | X){
    int Y[10001];
    int now_num = X, flame = 0;
    bool flag = true;
    for(int i=0; i < N; i++){
      cin >> Y[i];
    }
    for(int i = 0; i < N; i++){
      while(1){
	if(flame > 10000){
	  cout << -1 << endl;
	  flag = false;
	  break;
	}

	if(Y[i] == now_num){
	  now_num = (A * now_num + B) % C;
	  flame++;
	  break;
	}else{
	  now_num = (A * now_num + B) % C;
	  flame++;
	}
      }
      if(!flag) break;
    }
    if(!flag) continue;
    cout << flame-1 << endl;
  }
  return 0;
}