#include<stdio.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

int main(){
	std::istream & c_in = cin;
	int n;
	c_in >> n;
	cout << n << ":";

	int primes=0;
	int i = 2;
	while (n != 1)
	{
		if ((n % i) == 0) {
			n /= i;
			cout << " " << i;
			continue;
		}
		i += 1 + (i & 1);
		if (i > ::sqrt(n))
		{
			cout << " " << n;
			break;
		}
	}
	cout << endl;
}