#include<bits/stdc++.h>
using namespace std;

int	calc_score(int H, int grid[10][5], int score_grid[10][5])
{
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < 5; ++j)
			score_grid[i][j] = 0;
	}
	for (int i = 0; i < H; ++i) {
		int	max_cnt = 0, cnt = 0;
		int	head = 0, argmax = 0;
		for (int j = 0; j < 5; ++j) {
			if (grid[i][j] == grid[i][head]) {
				++cnt;
			} else {
				head = j;	
				cnt = 1;
			}
			if (max_cnt < cnt) {
				max_cnt = cnt;
				argmax = head;
			}
		}
		if (max_cnt < 3) continue;
		for (int j = argmax; j < argmax + max_cnt; ++j)
			score_grid[i][j] = grid[i][j];
	}
	int	score = 0;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < 5; ++j)
			score += score_grid[i][j];
	}
	return score;
}

void	update(int H, int grid[10][5], int score_grid[10][5])
{
	for (int j = 0; j < 5; ++j) {
		int top = H - 1;
		for (int i = H - 1; i >= 0; --i) {
			if (grid[i][j] == score_grid[i][j]) continue;
			grid[top][j] = grid[i][j];
			--top;
		}
		for (int i = top; i >= 0; --i)
			grid[i][j] = 0;
	}
}

int	main()
{
	int	H;
	int	grid[10][5] = {};
	int	score_grid[10][5] = {};
	while (cin >> H) {
		if (H == 0) break;
		int	score = 0;
		for (int i = 0; i < H; ++i) {
			for (int j = 0; j < 5; ++j)
				cin >> grid[i][j];
		}
		int tmp;
		while ((tmp = calc_score(H, grid, score_grid)) > 0) {
			score += tmp;
			update(H, grid, score_grid);
		}
		cout << score << endl;
	}
}



