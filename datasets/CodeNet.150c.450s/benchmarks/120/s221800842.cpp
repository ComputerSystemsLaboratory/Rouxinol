#include <iostream>
#include <bitset>
#include <algorithm>
 
using namespace std;
 
bitset<10000> cookie[10];
 
///////////////////////////SubMain//////////////////////////////////
int main(int argc, char *argv[])
{
 
    int R, C;
	while(cin >> R >> C && R > 0)
	{
		int i, j;
		for (i = 0; i < R; ++i)
		{
			for (j = 0; j < C; ++j)
			{
				bool upwards;
				cin >> upwards;
				cookie[i][j] = upwards;
			}
		}
 
		// ??¨?¨?????????±???2^R?§??????¢
		int permute_r = 1 << R;
		int result = 0;
		for (i = 0; i < permute_r ; ++i)
		{
			// ????????????????????¢
			for (j = 0; j < R; ++j)
			{
				// ?????????????????????????????¢
				if (i & (1 << j))
				{
					cookie[j].flip();
				}
			}
			
 
			// ??????????????????????????????????????????????\??????°????????¶?????§???
			int possible_answer = 0;
			for (j = 0; j < C; ++j)
			{
				int up_cookie_count = 0;
				for (int k = 0; k < R; ++k)
				{
					if (cookie[k][j])
					{
						++up_cookie_count;
					}
				}
				possible_answer += max(up_cookie_count, R - up_cookie_count);
			}
			// ??????????????§???
			result = max(result, possible_answer);
			
			// ??????
			for (j = 0; j < R; ++j)
			{
				if (i & (1 << j))
				{
					cookie[j].flip();
				}
			}
		}
		cout << result << endl;
	}
 
    return 0;
}