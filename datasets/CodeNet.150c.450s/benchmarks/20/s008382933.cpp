#include <iostream>
using namespace std;

int main() {
  long long S;
  cin >> S;
  int h;
  h = S/3600;
  int m;
  m = (S-3600*h)/60;
  int s;
  s = S-3600*h-60*m;

  cout << h << ":" << m << ":" << s << endl;
  
}