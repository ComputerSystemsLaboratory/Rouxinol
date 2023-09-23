#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int debt = 100000, n;
  cin >> n;
  while(n--){
  	debt = debt * 105 / 100;
  	if(debt % 1000 > 0){
  		debt /= 1000;
  		debt++;
  		debt *= 1000;
  	}
  }
  cout << debt << endl;
}