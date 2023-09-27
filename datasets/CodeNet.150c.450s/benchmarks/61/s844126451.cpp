#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int N, A, B, C, X;
	while(cin >> N >> A >> B >> C >> X)
	{
		if(!N && !A && !B && !C && !X)
		{
			break;
		}
		vector<int> Vec(N);
		for(int i = 0; i < N; ++i)
		{
			cin >> Vec[i];
		}
		int count = 0;
		for(int i = 0; i < N; ++i)
		{
			while(Vec[i] != X)
			{
				X = (A * X + B) % C;
				++count;
				if(count > 10000)
				{
					cout << -1 << endl;
					goto NEXT;
				}
			}
			X = (A * X + B) % C;
			++count;
		}
		cout << count - 1 << endl;
NEXT:
		;
	}
}

int main()
{
	solve();
	return(0);
}