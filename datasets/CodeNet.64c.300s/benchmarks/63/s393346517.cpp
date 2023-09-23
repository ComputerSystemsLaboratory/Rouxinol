#include <iostream>
using namespace std;

int solve_gcd(int a, int b)
{
	int m,n;
	if(a > b)
	{
		m = a;n = b;
	} else {
		m = b;n = a;
	}

	int r = m%n;
	while(r !=0)
	{
		m = n;
		n = r;
			
		r = m%n;
	}

	return(n);
}

int solve_lcm(int a, int b, int gcd)
{
	long long int c=(long long int)a*b;
	return(c/gcd);
}

int main()
{
	int a,b, gcd, lcm;

	while(cin >> a >> b)
	{
		gcd=solve_gcd(a,b);
		lcm=solve_lcm(a,b,gcd);
		cout << gcd << " " << lcm << endl;
	}
	return 0;
}