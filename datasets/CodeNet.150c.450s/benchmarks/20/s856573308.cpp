#include <iostream>
using namespace std;

int main(){
  int t, h, m, s;

  cin >> t;

  h = t/(60*60);
  t = t % (60*60);
  m = t/60;
  s = t % 60;

  cout << h << ":" << m << ":" << s << endl;

  return 0;
}
