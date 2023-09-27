#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
typedef unsigned long long ull;

int main()
{

	int n;
	ull ans=1;

	cin >> n;
	for(int i=1; i<=n; i++){
		ans = ans*(ull)i; 
	}
	cout << ans << endl;

	return 0;
}