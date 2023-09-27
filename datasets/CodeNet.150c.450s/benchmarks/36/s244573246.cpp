#include <iostream>
using namespace std;

int main() {
	int d,i,s;
	while (cin >> d) {
		s=0;
		for (i=d;i<600;i+=d) s+=d*i*i;
		cout << s << endl;
	}
	return 0;
}