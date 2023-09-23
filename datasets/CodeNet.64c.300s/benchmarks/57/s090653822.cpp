#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<math.h>
#include<string.h>
using namespace std;

int main() {

	int ose[10][10000];														//お煎餅
	int R, C;																//縦、横
	while (cin >> R >> C,R!=0&&C!=0) {															//縦、横の入力
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				cin >> ose[i][j];												//お煎餅入力
			}
		}

		int ans = 0;																//答え入れるやつ				

		for (int i = 0; i < (1 << R); i++) {									//縦のお煎餅の並びの全パターン

			int table = 0;
			int sum = 0;
			for (int j = 0; j < C; j++) {										//横指定
				table = 0;
				for (int k = 0; k < R; k++) {									//縦指定

					table += (ose[k][j] != ((i >> k) & 1));

				}
				sum += max(table, R - table);
			}
			ans = max(ans, sum);
		}

		cout << ans << endl;													//回答出力
	}
	return 0;
}
