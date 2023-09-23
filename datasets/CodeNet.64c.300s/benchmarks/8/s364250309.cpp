#include "bits/stdc++.h"
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 3; i <= a; ++i) {

		if (i % 3 == 0 || i % 10==3||i/10%10==3||i/100%10==3||i/1000%10==3||i/10000%10==3) {
			cout <<' '<<i;
		}
	}cout<<endl;
}