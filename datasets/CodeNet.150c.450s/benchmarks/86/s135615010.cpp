#include<iostream>
using namespace std;
int main(){
  int N, M, P, X[100];
  while(cin >> N >> M >> P , N){
    int sum = 0;
    for(int i = 0 ; i < N ; sum += X[i++] ) cin >> X[i];
    if(X[--M]) cout << sum * (100 - P) / X[M] << endl;
    else cout << 0 << endl;
  }
}
