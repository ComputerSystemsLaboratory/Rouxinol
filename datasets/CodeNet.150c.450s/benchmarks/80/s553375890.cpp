#include <iostream>
using namespace std;


int main(){

  int a1,a2,a3,a4,b1,b2,b3,b4;
  cin >> a1 >> a2 >> a3 >> a4;
  cin >> b1 >> b2 >> b3 >> b4;

  int sa = a1 + a2 + a3 + a4;
  int sb = b1 + b2 + b3 + b4;

  if(sa > sb) cout << sa << endl;
  else cout << sb << endl;

}