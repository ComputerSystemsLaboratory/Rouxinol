#include <algorithm>
#include <iostream>
using namespace std;

int tax(int a, int b) {
  return b*(100+a)/100;
}


int main() {
  int X,Y,S;
  while(cin >> X >> Y >> S && X>0){
    int maximum = 0;
    for(int i=1; i<S; ++i)
      for(int j=i; j<S; ++j)
	if(tax(X,i) + tax(X,j) == S)
	  maximum = max(maximum, tax(Y,i) + tax(Y,j));
    cout << maximum << endl;
  }

}