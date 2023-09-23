#include <cstdio>
#include <iostream>

const int MAX_COL = 10;
const int MAX_ROW = 10000;
int field[MAX_COL + 1][MAX_ROW + 1];

int R,C;
void flip(int axis)
{
	for(int i=0;i<C;i++)
		field[axis][i] = -field[axis][i]+1;
}
int solve()
{
	int min_score = R*C;
	int column_sum;
	for(int i=0;i<1<<R;i++)
	{
		for(int j=0;j<R;j++)
			if((i>>j)&1) flip(j);
		int score = 0;
		for(int j=0;j<C;j++)
		{
			column_sum = 0;
			for(int k=0;k<R;k++)
				column_sum+=field[k][j];
			score += std::min(column_sum, R-column_sum);
		}
		min_score = std::min(min_score,score);
		for(int j=0;j<R;j++)
			if((i>>j)&1) flip(j);
	}
	return R*C-min_score;
}

int main()
{
	scanf("%d %d", &R, &C);
	while(C!=0 || R!=0)
	{
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                scanf("%d", &field[i][j]);
        printf("%d\n", solve());
        scanf("%d %d", &R, &C);
    }
	return 0;
}