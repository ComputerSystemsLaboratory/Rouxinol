#include <iostream>
using namespace std;
int main () {
	int a,b,c;
	while ((a!=0)||(b!=0)) {
		cin >> a >> b;
		if ((a!=0)||(b!=0))
			if (a<b) {
				cout<< a << " " << b << endl;
			} else cout<< b << " " << a << endl;
	}
	
	return 0;
}
