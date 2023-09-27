#include <iostream>
using namespace std;
int main(void){
  for(;;){
    int N, A, B, C;
    long long int X;
    cin >> N >> A >> B >> C >> X;
    if(N == 0){ return 0; }
    int Y[N];
    for(int i = 0 ; i < N ; i++){
      cin >> Y[i];
    }
    int i = 0;
    bool finish = false; int ans = -1;
    for(int step = 0 ; step <= 10000 && finish == false ; step++){
      if(X == Y[i]){
	if(i == N - 1){finish = true; ans = step;}else{i++;}
      }
      X = (A * X + B) % C;
    }
    cout << ((finish==true)?(ans):(-1)) << endl;
  }
}

