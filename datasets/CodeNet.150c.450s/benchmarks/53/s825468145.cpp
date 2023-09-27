#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	long long num; cin >> num;
	
	cout << num << ":";
	
	for (int i = 2; i*i <= num; ++i)
		while (num % i == 0)cout << " " << i, num /= i;
	
	if (num != 1)cout << " " << num; cout << endl;
}