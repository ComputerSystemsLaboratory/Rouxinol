#include <iostream>
using namespace std;

void F(int *a, int*b) {
	int x;
	x = *a;
	*a = *b;
	*b = x;
}

int main() {
	int n, a, b, c;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a >> b >> c;
		if (c < a)
			F(&c, &a);
		if (c < b)
			F(&c, &b);

		if (a*a + b*b == c*c)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}