#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, M, P;
  int A[100];
  int s;
  cin >> N >> M >> P;
  while( N!=0 || M!= 0 || P!= 0){
  	s = 0;
  	for(int i = 0; i < N; i++){
  		cin >> A[i];
  		s += A[i];
  	}
  	if(A[M-1] != 0)cout << s*(100-P)/A[M-1] << endl;
  	else cout << 0 << endl;
  	cin >> N >> M >> P;
  }
  return 0;
}
