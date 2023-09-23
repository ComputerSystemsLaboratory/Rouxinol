#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
	if( a==1 || b==1 ) return 1;
	else if(max(a,b)%min(a,b) == 0) return min(a,b);
	else return gcd(min(a,b), (max(a,b))%(min(a,b)));
}


int main() {
	// your code goes here
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}