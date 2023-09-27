#include <iostream>
using namespace std;

unsigned long long int fact(unsigned long long int n)
{
	if(n==0)
		return 1;
	return n*fact(n-1);
}

int main()
{
	unsigned long long int n;
	while(cin >> n)
		cout << fact(n) << endl;
	return 0;
}