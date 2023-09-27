#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int M[11][5];

int main() {
	ios::sync_with_stdio(false);
	while(true) {
		int H; cin >> H;
		if(H == 0) break;
		memset(M, 0, sizeof(M));
		for(int i = H - 1; i >= 0; --i) {
			for(int j = 0; j < 5; ++j) {
				cin >> M[i][j];
			}
		}
		int ans = 0;
		while(true) {
			/*
			for(int i = H - 1; i >= 0; --i) {
				for(int j = 0; j < 5; ++j) printf("%d", M[i][j]);
				printf("\n");
			}
			*/
			bool update = false;
			for(int i = 0; i < H; ++i) {
				for(int j = 0; j < 5; ++j) {
					if(M[i][j] == 0) continue;
					int s = 0;
					for(int k = j; k < 5; ++k) {
						if(M[i][k] == M[i][j]) ++s;
						else break;
					}
					if(s >= 3) {
						ans += s * M[i][j];
						for(int x = 0; x < s; ++x) {
							M[i][j + x] = 0;
						}
						update = true;
					}
				}
			}
			for(int j = 0; j < 5; ++j) {
				while(true) {
					bool update2 = false;
					for(int i = 0; i < H; ++i) {
						if(M[i][j] == 0 && M[i + 1][j] != 0) {
							M[i][j] = M[i + 1][j];
							M[i + 1][j] = 0;
							update2 = true;
						}
					}
					if(!update2) break;
				}
			}
			if(!update) break;
		}
		cout << ans << endl;
	}
}