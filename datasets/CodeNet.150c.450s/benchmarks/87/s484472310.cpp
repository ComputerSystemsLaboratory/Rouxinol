#include <cstdio>
using namespace std;

int main() {
	const int MAX_H = 10;
	int H, board[MAX_H][5];
	int res;
	bool updated;
	bool zeroseq;
	int seq;

	while(true){
		scanf("%d", &H);
		if (H == 0) {
			break;
		}
		for (int i = 0;i < H;i++) {
			for (int j = 0;j < 5;j++) {
				scanf("%d", &board[i][j]);
			}
		}

		updated = true;
		res = 0;
		while (updated) {
			updated = false;
			for (int i = 0;i < H;i++) {
				seq = 1;
				for (int j = 0;j < 5;j++) {
					if (j == 4 || board[i][j] != board[i][j + 1]) {
						if (seq >= 3) {
							updated = true;
							res += board[i][j] * seq;
							for (int k = 0;k < seq;k++) {
								board[i][j - k] = 0;
							}
						}
						seq = 1;
					}
					else if (j + 1 < 5 && board[i][j] == board[i][j + 1] && board[i][j] != 0) {
						seq++;
					}
				}
			}
			for (int j = 0;j < 5;j++) {
				zeroseq = true;
				for (int i = 0;i < H;i++) {
					if (board[i][j] == 0 && !zeroseq) {
						for (int k = i;k > 0;k--) {
							board[k][j] = board[k - 1][j];
						}
						board[0][j] = 0;
					}
					else {
						zeroseq = false;
					}
				}
			}
		}

		printf("%d\n", res);
	}

	return 0;
}