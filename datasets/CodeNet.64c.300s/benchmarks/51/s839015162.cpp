#include<iostream>
using namespace std;
int main()
{
	long long n,a=1;
	cin >> n;
	for (int i = (int)n; i >= 2; i--){
		a *= i;
	}
	cout << a << endl;
}