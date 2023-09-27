#include "iostream"
#include "math.h"
#include "algorithm"
using namespace std;

int H, W;
int status[10][10000];
int gap[10];
int box;
int num;
int ans;

int main() {
	cin >> H >> W;
	while (H != 0 && W != 0) {
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cin >> status[i][j];
			}
		}
		for (int j = 0; j < W; j++) {
			for(int i=0;i<H;i++){
				if (status[i][j])box++;
			}
			box = max(box, H - box);
			ans += box;
			box = 0;
		}
		for (int n = 1; n < pow(2,H); n++) {
			for (int i = 0; i < H; i++) {
				if (n%(int)pow(2, i + 1) >= pow(2, i))gap[i] = true;
				else gap[i] = false;
			}
			for (int j = 0; j < W; j++) {
				for (int i = 0; i < H; i++) {
					if (status[i][j] ^ gap[i])box++;
				}
				box = max(box, H - box);
				num += box;
				box = 0;
			}
			if (ans < num)ans = num;
			num = 0;
		}
		cout << ans<<"\n";
		ans = 0;
		cin >> H >> W;
	}
	return 0;
}