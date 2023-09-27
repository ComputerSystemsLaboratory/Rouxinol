#include<iostream>
using namespace std;

int main(){
	int n,a;
	a = 100000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		a=a*1.05;
		a = ((a + 999) / 1000) * 1000;
	}
	cout << a << endl;
	return 0;
}