#include <iostream>
#define rep(i,a) for(i = 0; i < a; i++)
using namespace std;

int main(void) {

  int i,j,n,q,T,C;
  cin >> n;

  int S[n];
  rep(i,n){
    cin >> S[i];
  }

  cin >> q;
  C = 0;
  rep(i,q) {
    cin >> T;
    rep(j,n) {
      if(T == S[j]) {
	C++;
	break;
      }
    }
  }
  cout << C << endl;
  return 0;
}