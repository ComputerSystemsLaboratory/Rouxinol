#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int kaidan[31];
	kaidan[0] = 1;
	kaidan[1] = 1;
	kaidan[2] = 2;
	for (int i = 3; i <= 30; i++) {
		kaidan[i] = kaidan[i - 1] + kaidan[i - 2] + kaidan[i - 3];
	}
	int n;
	while(cin >> n&&n)
	cout << (int)ceil(kaidan[n] / 3650.0) << endl;
	
	return 0;
}