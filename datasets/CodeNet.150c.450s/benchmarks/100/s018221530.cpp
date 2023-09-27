#include<iostream>
using namespace std;
int main() {
	int n;
	long long int x;
	x = 1;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		x=x*(n - i);
	}
	cout << x <<endl;

}