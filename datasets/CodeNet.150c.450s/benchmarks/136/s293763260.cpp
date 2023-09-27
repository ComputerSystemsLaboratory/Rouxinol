#include <iostream>
#include <algorithm>
using namespace std;

typedef long long lli;

lli gcd(lli a, lli b) { return b == 0 ? a : gcd(b, a%b);}

int main(){
  lli a,b;
  while(cin >> a >> b)
    cout << gcd(a,b) << ' ' << a * b / gcd(a,b) << endl;
}