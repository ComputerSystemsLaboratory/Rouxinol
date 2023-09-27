#include <iostream>
#include <algorithm>


int a[50];
using namespace std;


int fibonacci(int n) {
	if (a[n] > 0)
		return a[n];

	a[n] = fibonacci(n-1) + fibonacci(n-2);
	return a[n];
}


int main() {

	fill(a,a + 50, -1);

	int n;

	cin >> n;

	a[0] =  1;
	a[1] =  1;

	cout << fibonacci(n) << endl;

}