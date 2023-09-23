#include <iostream>
using namespace std;



int N,M,P;
int X[110];
int g;

int main(){


  while(1){
    cin >> N >> M >> P;
    if(N == 0 && M == 0 && P == 0) break;

    g = 0;

    for(int i = 0 ; i < N ; i ++){
      cin >> X[i] ;
      g += X[i] * 100 - P*X[i];
    }
    if(X[M-1] == 0) cout << "0" << endl;
    else    cout << g/X[M-1] << endl;

  }


  return 0;

}