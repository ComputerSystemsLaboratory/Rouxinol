#include<iostream>
#include<vector>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)

int main()
{
	while (1)
	{
		int N, A, B, C, X;
		int Y[100];
		cin >> N >> A >> B >> C >> X;
		if (N == 0)break;
		REP(i, N)cin >> Y[i];
		int index = 0;
		if (Y[index] == X)
		{
			index++;
		}
		FOR(i, 0, 10002)
		{
			if (i >= 10001)
			{
				cout << -1 << endl;
				break;
			}
			if (index >= N)
			{
				cout << i << endl;
				break;
			}
			int temp = (A*X + B) % C;
			if (Y[index] == temp)index++;
			X = temp;
		}
	}
	return 0;
}