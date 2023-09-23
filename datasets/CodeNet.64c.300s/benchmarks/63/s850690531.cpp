#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	long long a,b;
	long long GCD=0,LCM=0;
	long long tmp=0,tmp_a,tmp_b;

	
	while (cin >> a >> b)
	{
		tmp_a = a;
		tmp_b = b;
		tmp = a%b;
		while (tmp!=0) {
			a = b;
			b = tmp;
			tmp = a%b;
		}
		GCD = b;

		LCM = tmp_a*tmp_b / GCD;

		cout << GCD <<" "<<LCM<<endl;
	}

	return 0;
}