#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
typedef pair<int, int> P;
bool field[21][21];

void solve()
{
	int N;
	while(cin >> N, N)
	{
		memset(field, 0, sizeof(bool) * 21 * 21);
		vector<P> Vec(N);
		for(int i = 0; i < N; ++i)
		{
			cin >> Vec[i].first >> Vec[i].second;
		}
		int M;
		cin >> M;
		P pos;
		pos.first = 10;
		pos.second = 10;
		char str;
		int move;
		for(int i = 0; i < M; ++i)
		{
			cin >> str >> move;
			switch(str)
			{
				case 'N': for(int j = 0; j < move; ++j)
						  {
							  ++pos.second;
							  field[pos.first][pos.second] = true;
						  }break;
				case 'E': for(int j = 0; j < move; ++j)
						  {
							  ++pos.first;
							  field[pos.first][pos.second] = true;
						  }break;
				case 'S':for(int j = 0; j < move; ++j)
						  {
							  --pos.second;
							  field[pos.first][pos.second] = true;
						  }break;
				case 'W': for(int j = 0; j < move; ++j)
						  {
							  --pos.first;
							  field[pos.first][pos.second] = true;
						  }break;
			}
		}
		bool flag = true;
		for(int i = 0; i < N; ++i)
		{
			if(field[Vec[i].first][Vec[i].second] == false)
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}