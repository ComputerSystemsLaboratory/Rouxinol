#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<long long int>D(1000001 , 1);
	D[0] = 0;
	D[1] = 0;
	for(long long int i = 2; i <= sqrtl(1000001); i++)
	{
		if(D[i])
		{
			long long int j = 2;
			while(i*j < 1000001)
			{
				D[i*j] = 0;
				j++;
			}
		}
	}
	for(long long int i = 1; i < 1000001; i++)
	{
		D[i] += D[i - 1];
	}
	long long int n;
	while(cin >> n)cout << D[n] << endl;
	return 0;
}