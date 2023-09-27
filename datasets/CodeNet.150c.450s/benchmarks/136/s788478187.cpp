#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long a = 0;
	long long b = 0;
	while(cin >> a >> b)
	{
		long long GCD = 0;
		long long LCM = 0;
		if(a < b)
			swap(a,b);
		long long temp = a * b;
		while(a % b != 0)
		{
			long long t = a % b;
			a = b;
			b = t;
		}
		LCM = b;
		GCD = temp / LCM;
		cout << LCM << " " << GCD <<endl;
	}
	return 0;
}
