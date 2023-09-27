#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int N; cin >> N;
	const int base = 100000;
	int ans = base;
	
	for(int i = 0; i < N; i++)
	{
		ans += (ans * 0.05);
		
		int diff = (ans % 1000);
		if( diff != 0 )ans += (1000 - diff);
	}
	
	cout << ans << endl;
	return 0;
}