#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
	return x * x;
}

int main(void)
{
	int n;

	while(cin >> n){
		int s = 0;

		for(int i = 1; i * n < 600; i++)
			s += f(i * n) * n;

		cout << s << endl;
	}

	return 0;
}