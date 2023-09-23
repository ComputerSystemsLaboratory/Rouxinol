#include<iostream>
#include<algorithm>

int R, C;
int senbei[11][10001];


int main(){
	while (std::cin >> R >> C, R|C){
		for (int i = 0; i < R; ++i) for (int j = 0; j < C; ++j)
			std::cin >> senbei[i][j];

		int ans = 0;
		for (int S = 0; S < 1 << R; ++S)
		{
			int cnt = 0;
			for (int j = 0; j < C; ++j)
			{
				int t = 0;
				for (int i = 0; i < R; ++i)
					t += senbei[i][j] ^ (S >> i & 1);

				cnt += std::max(t, R - t);
			}
			ans = std::max(ans, cnt);
		}

		std::cout << ans << std::endl;
	}
}