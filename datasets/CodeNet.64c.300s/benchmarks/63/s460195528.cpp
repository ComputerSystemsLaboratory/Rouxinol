#include <iostream>
#include <string>
using namespace std;

long gcd(long a, long b){
	if (a % b == 0){
		return b;
	}
	else {
		return (gcd(b, a%b));
	}
}
long lcm(long a, long b){
	long gc = gcd(a,b);
	long x = a*b;
	x = x / gc;
	return x;

}

int main(){
	long a,b;
	while (cin >> a >> b){
		long gc = 0;
		if (a >= b){
			gc = gcd(a, b);
		}
		else{
			gc = gcd(b,a);
		}
		long lc = 0;
		if (a >= b){
			lc = lcm(a, b);
		}
		else{
			lc = lcm(b,a);
		}
		cout << gc << " " << lc << endl;

		

	}



	return 0;
}