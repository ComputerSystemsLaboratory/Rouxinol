#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	int a, b;
	cin >> a >> b;
	cout << "a";
	if(a > b)
		cout << " > ";
	else if(a < b)
		cout << " < ";
	else
		cout << " == ";
	cout << "b" << endl;
	return 0;
} 
