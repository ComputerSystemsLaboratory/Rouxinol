#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

typedef vector<int> vi;

int main()
{
	while (1)
	{
		int N, A, B, C, X;
		cin >> N >> A >> B >> C >> X;
		if (N == 0) return 0;

		vi Y(N); rep(i, 0, N) cin >> Y[i];

		int y = 0;
		int ans = -1;
		rep(i, 0, 10001)
		{
			if(i != 0) X = (A * X + B) % C;
			if (Y[y] == X) y++;
			if (y == N)
			{
				ans = i;
				break;
			}
		}

		cout << ans << endl;
	}
}