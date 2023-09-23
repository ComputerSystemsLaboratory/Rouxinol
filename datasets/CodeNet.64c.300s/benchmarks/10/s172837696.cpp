#include<iostream>
using namespace std; //or std::cin et al.

int main() {
	int a,b,tmp;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		if (a > b) {
		    tmp = a;
		    a = b;
		    b = tmp;
		}
		cout << a << " " << b << endl;
	}
	
	return 0;
}
