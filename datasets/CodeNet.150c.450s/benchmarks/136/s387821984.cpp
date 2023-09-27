#include <iostream>
#include <algorithm>
using namespace std;

int gcd(long long a, long long b){
  if(max(a, b) % min(a,b) == 0) return min(a,b);
  return gcd(min(a,b), max(a,b)%min(a,b));
}


int main() {
    ios::sync_with_stdio(false);
    long long a, b, g, l;
    while(cin >> a >> b){
      g = gcd(a, b);
      l = (a*b)/g;
      cout << g << " " << l << endl;
    }
    return 0;
}