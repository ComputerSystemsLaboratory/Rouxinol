#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int map[60][60];
int main(void) {
	vector<int> list;
	for (;;) {
		int w, h;
		cin >> w >> h;
		if (!(w&&h))return 0;
		int cnt = 1;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				int buf;
				cin >> buf;
				map[i][j] = (buf?cnt++:0);
			}
		}
		bool update = true;
		for (;update;){
			cnt = 0;
			update = false;
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < w; j++) {
					if (!map[i][j])continue;
					for (int n = max(0, i - 1); n <= min(h-1, i + 1); n++) {
						for (int m = max(0, j - 1); m <= min(w-1, j + 1); m++) {
							if (!map[n][m])continue;
							if (map[i][j]>map[n][m]) {
								map[i][j] = map[n][m];
								update = true;
							}
						}
					}
				}
			}
		}
		vector<int> num;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				num.push_back(map[i][j]);
			}
		}
		sort(num.begin(), num.end());
		num.erase(unique(num.begin(),num.end()),num.end());
		cout << num.size()-((num[0]==0)?1:0)<<endl;
	}
	return 0;
}