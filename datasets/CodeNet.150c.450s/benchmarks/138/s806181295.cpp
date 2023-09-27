#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

long long  gcd(long long a, long long b){
	if (a < b) return gcd(b, a);
	else if (b == 0) return a;
	else return gcd(b, a % b);
}

int main(){
	long long x, y;
	cin >> x >> y;
	cout << gcd(x, y) << endl;
}