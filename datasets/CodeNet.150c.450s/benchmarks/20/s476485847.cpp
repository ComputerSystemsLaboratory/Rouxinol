#include <iostream>
using namespace std;
int main(void){
  int t,h,m,s;
  cin >> t;
  s=t%60;
  t/=60;
  m=t%60;
  t/=60;
  h=t%60;
  cout << h << ':' << m << ':' << s << endl;
  return 0;
}
