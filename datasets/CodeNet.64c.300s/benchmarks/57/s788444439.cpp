#include <cstdio>
#include <iostream>

int R,C;	// (1 ??? R ??? 10, 1 ??? C ??? 10 000)
const int MAX_ROW = 10;
const int MAX_COL = 10000;
bool is_flipped[MAX_ROW + 1][MAX_COL + 1];

void flip(int row)
{
	for(int c=0;c<C;c++)
		is_flipped[row][c] = !is_flipped[row][c];
}
int solve()
{
	int min_score = R*C;
	for(int i=0;i<1<<R;i++)
	{
		for(int r=0;r<R;r++)
			if((i>>r)&1) flip(r);
		int score = 0;
		for(int c=0;c<C;c++)
		{
			int column_sum = 0;
			for(int r=0;r<R;r++)
				if(is_flipped[r][c]) column_sum++;
			score += std::min(column_sum, R-column_sum);
		}
		min_score = std::min(min_score,score);
		for(int r=0;r<R;r++)
			if((i>>r)&1) flip(r);
	}
	return R*C-min_score;
}

int main()
{
	scanf("%d %d", &R, &C);
	int input;
	while(C!=0 || R!=0)
	{
        for (int r = 0; r < R; r++)
            for (int c = 0; c < C; c++)
			{
                scanf("%d", &input);
				is_flipped[r][c] = input==1;
			}
        printf("%d\n", solve());
        scanf("%d %d", &R, &C);
    }
	return 0;
}