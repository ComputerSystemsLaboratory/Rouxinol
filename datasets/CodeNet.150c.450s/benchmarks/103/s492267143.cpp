#include<iostream>
using namespace std;

int numofbits(long bits)
{
	bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
	bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
	bits = ((bits >> 4) + bits) & 0x0f0f0f0f;
	bits += bits >> 8;
	return (bits + (bits >> 16)) & 0xff;
}

int main()
{
	int n, s;
	int count;
	int i, j;
	int sum;

	while (cin>>n>>s, n||s) {
		count = 0;
		for (i = 0; i < 1<<10; i++) {
			if ( numofbits(i) != n ) continue;
			sum = 0;
			for (j = 0; j < 10; j++) {
				if (i>>j & 1) sum += j;
			}
			if (sum == s) count++;
		}
		cout << count << endl;
	}

	return 0;
}