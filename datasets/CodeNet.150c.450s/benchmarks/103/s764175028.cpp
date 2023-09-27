#include<iostream>
using namespace std;

int res = 0;
int n, s;

void solve(int p, int sum, int q)
{
	if(p == n && sum == s){
		res++;
		return;
	}

	if(sum > s) return;

	for(int i=q; i<10; i++)
		solve(p+1, sum+i, i+1);
}

int main(void)
{
	while(cin >> n >> s)
	{
		if(n==0 && s==0) break;

		solve(0, 0, 0);

		cout << res << endl;
		res = 0;
	}
	return 0;
}