#include <iostream>
using namespace std;

int a, b, c;
void f(char a) {
	cout << a << endl;
}

int main(){
	while (cin >> a >> b >> c && !(a == -1 && b == -1 && c == -1)) {
		if (a == -1 || b == -1)
			f('F');
		else if (a + b >= 80)
			f('A');
		else if (a + b >= 65)
			f('B');
		else if (a + b >= 50)
			f('C');
		else if (a + b >= 30)
			if (c >= 50)
				f('C');
			else
				f('D');
		else
			f('F');
	}

	return 0;
}