#include<iostream>

using namespace::std;

int fib(int n) {
	


	int x[100];
	x[0] = 0;
	x[1] = 1;
	x[2] = 2;
	x[3] = 4;

	for (int i = 4; i <= n; i++) {
		x[i] = x[i - 3] + x[i - 2] + x[i - 1];
	}
	return x[n];
}


int main() {
	/*int n;
	cin >> n;
	int ans;
	int ama;

	ans = n / 3;
	ans = ans * 4;

	if (n % 3 == 1) {
		ans +=
	}
	else if (n % 3 == 2) {

	}*/
	int a[100];
	int i= 0;

	while (true) {
		cin >>a[i];
		if (a[i] == 0)
			break;
		i++;
	}

	for (int j = 0; j < i; j++) {
		if (a[j] != 0) {
			cout << fib(a[j])/10/ 365 + 1 << endl;
		}
		else {
			cout <<0<<endl;
		}
	}

	return 0;

}