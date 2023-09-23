#include <iostream>
using namespace std;
long long f(int n)
{
	return(n?n*f(n-1):1);
}
int main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;
	
	return 0;
}