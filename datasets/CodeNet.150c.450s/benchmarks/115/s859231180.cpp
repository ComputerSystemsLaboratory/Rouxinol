#include <bits/stdc++.h>

using namespace std;


long long L[1010][1010] {0};
int main(){
  int Q;
  cin >> Q;
  for(int i = 0; i < Q; i++){
    string X, Y;
    cin >> X >> Y;
    int xlen = X.length();
    int ylen = Y.length();
    for(int i = 1; i<= xlen; i++){
      for(int k = 1; k <= ylen; k++){
	if(X[i-1] == Y[k-1]){
	  L[i][k] = 1 + L[i-1][k-1];
	}else{
	  L[i][k] = max(L[i][k-1], L[i-1][k]);
	}
      }
    }

    cout << L[xlen][ylen] << endl;
  }

}