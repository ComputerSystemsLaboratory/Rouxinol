#include <cmath>
#include <iostream>

using namespace std;

int main() {

	int n, a, b, c, d;

	while(1) {
		cin >> n;
		if(n==0)
			break;
		a=0;
		b=0;
		while(n!=0) {
			cin >> c >> d;
			if(c>d)
				a+=c+d;
			else if(c<d)
				b+=c+d;
			else {
				a+=c;
				b+=d;
			}
	
			n--;
		}
		cout << a << " " << b << endl;
	}


	return 0;

}