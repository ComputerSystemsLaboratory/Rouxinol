#include <iostream>
using namespace std;


int main (){
  int a, b, c;
  cin >> a >> b >> c;
  if ((b-a)*(c-b) > 0) cout << "Yes" << '\n';
  else cout << "No" <<'\n';

}