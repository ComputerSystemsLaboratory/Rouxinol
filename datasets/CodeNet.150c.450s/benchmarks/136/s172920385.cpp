#include <iostream>

using namespace std;

typedef unsigned long long ull;

int gcd(ull a,ull b){
  if(b > 0) return gcd(b, a % b);
  else return a;
}

int main(){
  ull a,b,c;
	while(cin >> a >> b){
	  c = gcd(a,b);
	  cout << c << " " << (ull)((a * b)/c) << endl; 
	}
  return 0;
}