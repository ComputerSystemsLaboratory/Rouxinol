#include <cstdio>
#include <algorithm>

using namespace std;

int bd[10][10000];

int main(){
	while (1){
		int r, c;
		scanf(" %d %d", &r, &c);
		if (r == 0 && c == 0) break;
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				scanf(" %d", &bd[i][j]);
			}
		}
		int ans = -1;
		int up = (1 << r);
		for (int sl = 0; sl < up; sl++){
			int h = sl;
			for (int i = 0; i < r; i++){
				if (h % 2 == 1){
					for (int j = 0; j < c; j++){
						bd[i][j] = (bd[i][j] == 0) ? 1 : 0;
					}
				}
				h /= 2;
			}

			int cnt = 0;
			for (int j = 0; j < c; j++){
				int sm = 0;
				for (int i = 0; i < r; i++){
					sm += bd[i][j];
				}
				cnt += max(r - sm, sm);
			}
			ans = max(cnt, ans);
			h = sl;
			for (int i = 0; i < r; i++){
				if (h % 2 == 1){
					for (int j = 0; j < c; j++){
						bd[i][j] = (bd[i][j] == 0) ? 1 : 0;
					}
				}
				h /= 2;
			}

		}

		printf("%d\n", ans);
	}
	return 0;
}