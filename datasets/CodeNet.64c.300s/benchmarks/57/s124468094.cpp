#include <cstdio>
#include <cstring>

using namespace std;

int s[10][400];
int t[10][400];
int H, W;

int main()
{
	//freopen("in.txt", "r", stdin);

	while (scanf("%d%d", &H, &W)==2) {
		if (H==0 || W==0) break;
		int i, j;

		memset(s, 0, sizeof(s));

		for (i=0; i<H; i++) {
			for (j=0; j<W; j++) {
				int c;
				scanf("%d", &c);
				s[i][j/32] |= c<<(j%32);
			}
		}
		
		
		int mask;
		int limit = 1<<H;
		int max = 0;
		for (mask=0; mask<limit; mask++) {
			
			for (i=0; i<H; i++) {
				if (mask & (1<<i)) {
					for (j=0; j<400; j++)
						t[i][j] = s[i][j]^0xffffffff;

				}
				else {
					for (j=0; j<400; j++)
						t[i][j] = s[i][j];
				}
			}

			int sum = 0;
			for (j=0; j<W; j++) {
				int col_num = 0;
				int col, bit;
				col = j/32; bit = 1<<(j%32);
				for (i=0; i<H; i++) {
					if (t[i][col]&bit)
						col_num++;
				}
				if (col_num<H-col_num)
					col_num = H-col_num;
				sum += col_num;
			}
			if (max<sum)
				max = sum;

		}
		printf("%d\n", max);

	}

	return 0;
}