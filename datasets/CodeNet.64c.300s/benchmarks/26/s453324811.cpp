#include<iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
typedef unsigned long long int lint;
const lint C = 1000000007;

lint POW(lint M, lint N)
{
	lint ret;
	if (N == 0)return 1;
	else
	{
		ret = POW(M, N / 2);
		if (N % 2 == 0)ret = (ret*ret)%C;
		else ret = (((ret*ret)%C)*M)%C;
	}
	return ret;
}

int main()
{
	lint n, m;
	cin >> m >> n;
	lint t = 1;
	cout << POW(m, n) << endl;
	return 0;
}