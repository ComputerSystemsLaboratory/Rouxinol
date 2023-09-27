#include<bits/stdc++.h>
using namespace std;

int N,R;
int D[2][55];
int main(){
  while( cin >> N >> R  && ( N|| R) ){
    for(int i=0;i<N;i++) D[0][i] = i+1;
    for(int i=0;i<R;i++){
      int P,C;
      cin >> P >> C;
      int in = N - (P-1) - C;
      for(int j=0;j<in;j++) D[1][j] = D[0][j];
      for(int j=0;j<C;j++){
	D[1][in+(P-1)+j] = D[0][in+j];
      }
      for(int j=0;j<P-1;j++){
	D[1][in+j] = D[0][in+C+j];
      }
      for(int j=0;j<N;j++){
	D[0][j] = D[1][j];
	//	cout << D[0][j] << " ";
      }
      //      cout << endl;
    }
    cout << D[0][N-1] << endl;
  }
}