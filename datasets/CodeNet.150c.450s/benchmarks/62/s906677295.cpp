#include <bits/stdc++.h>
using namespace std;
int main(){
  int x,y,z;
  cin >> x >> y >> z;
  int m,n;
  m = max(x,max(y,z));
  n = min(x,min(y,z));
  cout << n << " " << x+y+z-m-n << " " << m << endl;
}