#include <string>
#include <iostream>
using namespace std;
string s, t; int n, a, b;
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> s >> t;
		if(s > t) a += 3;
		if(s < t) b += 3;
		if(s == t) a++, b++;
	}
	printf("%d %d\n", a, b);
	return 0;
}