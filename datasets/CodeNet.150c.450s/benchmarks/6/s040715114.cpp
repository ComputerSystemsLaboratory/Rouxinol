#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;
	if(a < b && b < c)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}