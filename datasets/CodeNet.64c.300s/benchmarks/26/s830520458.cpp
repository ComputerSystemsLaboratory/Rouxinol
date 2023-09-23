#include<stdio.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

const int M = 1000000007;

long power(long x, long n)
{
	long res;
	if (n == 0)
		return 1;

	res = power(x*x%M, n / 2);
	if ((n & 1) != 0)
	{
		res = res*x%M;
	}
	return res;
}
int main(){
	std::istream & c_in = cin;

	int m,n;
	c_in >> m >> n;
	cout << power(m,n) << endl;
}