#include <iostream>

using namespace std;

int h(int d) {
	return d*d;
}

int s(int d) {
	int n = 600/d; bool plus = (600%d==0 ? 0 : 1);
	int ret = 0;
	for (int i=1; i<n; i++) ret += d*h(i*d);
	if (plus) ret += d*h(600-d);
	return ret;
}

int main() {
	int d;
	
	while (cin >> d) {
		cout << s(d) << endl;
	}
		
	return 0;
}