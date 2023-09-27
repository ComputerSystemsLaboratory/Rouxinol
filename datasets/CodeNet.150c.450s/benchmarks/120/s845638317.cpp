#include<iostream>
#include<bitset>
#include<algorithm>
using namespace std;
int C, R;
bitset<10000> cookie[10];

int main()
{
	
	while (cin >> R >> C&& R || C)
	{

		for (int i = 0; i<R; i++)
			for (int j = 0; j<C; j++)
			{
				bool upwd;
				cin >> upwd;
				cookie[i][j] = upwd;
			}


		int permute = 1 << R;
		int res = 0;

		for (int i = 0; i< permute; i++)
		{
			for (int j = 0; j<R; j++)
				if (i & (1 << j))
					cookie[j].flip();

			int pos_res = 0;
			for (int j = 0; j<C; j++)
			{
				int up = 0;
				for (int k = 0; k<R; k++)
					if (cookie[k][j])
						up++;
				pos_res += max(up, R - up);
			}
			res = max(res, pos_res);

			for (int j = 0; j<R; j++)
				if (i & (1 << j))
					cookie[j].flip();
		}

		cout << res << endl;
	}
}