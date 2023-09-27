#include<iostream>
#include<bitset>
using namespace std;
bitset<10000> cookie[10];
int N , M;
int main(int argc, char const *argv[])
{
	while(cin >> N >> M , N != 0)
	{
		for(int i = 0 ; i < N ; i++)
			for(int j = 0 ; j < M ; j++)
			{
				bool data;
				cin >> data;
				cookie[i][j] = data;
			}
		int permute = 1 << N;
		int result = 0;
		for(int i = 0 ; i < permute ; i++)
		{
			for(int j = 0 ; j < N ; j++)
			{
				if(i & (1 << j))
				{
					cookie[j].flip();
				}
			}
			int possible_answer = 0;
			for(int j = 0 ; j < M ; j++)
			{
				int up_possible_answer = 0;
				for(int k = 0 ; k < N ; k++)
				{
					if(cookie[k][j])
					{
						up_possible_answer++;
					}
				}
				possible_answer += max(up_possible_answer , N - up_possible_answer);
			}
			result = max(result , possible_answer);
			for(int j = 0 ; j < N ; j++)
			{
				if(i & (1 << j))
				{
					cookie[j].flip();
				}
			}
		}
		cout << result << endl;
	}
	return 0;
}
