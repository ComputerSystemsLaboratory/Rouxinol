#include <iostream>
#include <cmath>
using namespace std;

int main (){
  int k,tmp;
  cin >> k;
  for (int i = 1; i <= k; i++) {
    if (i % 3 == 0) cout << " " << i;
    else {
      for (int j = 0; j < 6; j++) {
	tmp = i / (std::pow(10,j));
	if (tmp % 10 == 3) {
	  cout  << " " << i;
	  break;
	}
      }
    }
  }

  cout << endl;
  return 0;
}

