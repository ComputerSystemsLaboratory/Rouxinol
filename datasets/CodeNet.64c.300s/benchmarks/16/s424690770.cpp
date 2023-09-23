//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D
#include <iostream>
using namespace std;


int max(int x,int y){
  if(x > y) return x;
  else return y;
}

int min(int x,int y){
  if(x > y) return y;
  else return x;
}

int main(){
  int N;
  cin >> N;
  int A[N];
  for(int i = 0; i<N; i++){
    cin >> A[i];
  }
  //A??????????´???????
  int maxv = A[1]-A[0];
  int minv = A[0];

  for(int i=1; i < N; i++){
    maxv = max(maxv, A[i]-minv);
    minv = min(minv, A[i]);
  //  cout << minv << " " << maxv << endl;

  }
  cout << maxv << endl;
}