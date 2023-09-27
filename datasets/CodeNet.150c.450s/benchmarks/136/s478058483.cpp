#include <iostream>

using namespace std;
typedef long long LL;

LL gcd(LL x, LL y){
  return (y == 0? x: gcd(y, x % y));
}

LL lcm(LL x, LL y){
  return x * y / gcd(x,y);
}

int main(){
  LL x, y;
  while(true){
	if(!(cin >> x >> y)) return 0;
	cout << gcd(x,y) << " " << lcm(x,y) << endl;
  }
  return 0;
}