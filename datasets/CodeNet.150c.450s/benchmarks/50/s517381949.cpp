#include <iostream>
using namespace std;

const int V[6] = {1,5,10,50,100,500};
int a;

void solve()
{
	int ans = 0;
	for(int i=5;i>=0;i--){
		int t = a/V[i];
		a -= V[i]*t;
		ans += t;
	}
	cout << ans << endl;
}

int main()
{
	cin >> a;
	while(a){
		a = 1000-a;
		solve();
		cin >> a;
	}
	return 0;
}