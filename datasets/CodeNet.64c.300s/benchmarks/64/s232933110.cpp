#include <iostream>
using namespace std;
long gcd(long a,long b){
	if (a < b) swap(a, b);
	if (a%b == 0) return b;
	return gcd(b,a%b);
}
int main(){
	long x, y; cin >> x >> y;
	cout << gcd(x, y) << '\n';
}