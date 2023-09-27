#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int m, int n);

int main()
{
	int m, n;
	
	while (cin >> m >> n){
		if (m < n)	swap(m, n);
		
		int gcd = GCD(m, n);
		int lcm = n * (m / gcd);
		
		cout << gcd << ' ' << lcm << endl;
	}	
	return (0);
}

int GCD(int m, int n)
{
	int r;
	while (m % n != 0){
		r = n;
		n = m % n;
		m = r;
    }
	return (n); 
}