#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x;
	cin >> x;
		for(int i=0;i<x.length();i++)
			cout << x[x.length()-i-1];
	cout << endl;
	return 0;
}