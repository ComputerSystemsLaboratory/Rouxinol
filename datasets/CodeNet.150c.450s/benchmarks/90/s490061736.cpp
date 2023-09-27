#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int l[101] = { 0 };
	int n = 0;
	int g;
	while (cin >> g) {
		l[g]++;
		n = max(n, l[g]);
	}
	for (int i = 0; i < 100; i++){
		if (l[i] == n)
			cout << i << endl;
	}
}