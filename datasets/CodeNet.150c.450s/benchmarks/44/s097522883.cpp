#include <iostream>

using namespace std;

int main() {

	int a1, a2, a3, a4, b1, b2, b3, b4, h, b;

	while(cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4) {
		h=0;
		b=0;
		if(a1==b1)
			h++;
		if(a2==b2)
			h++;
		if(a3==b3)
			h++;
		if(a4==b4)
			h++;
		if(a1==b2||a1==b3||a1==b4)
			b++;
		if(a2==b3||a2==b4||a2==b1)
			b++;
		if(a3==b4||a3==b1||a3==b2)
			b++;
		if(a4==b1||a4==b2||a4==b3)
			b++;
		cout << h << " " << b << endl;
	}

	return 0;

}