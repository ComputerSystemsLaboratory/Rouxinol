//#define LOCAL

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <iostream>

#define R 10
#define C 10000

using namespace std;

int main(void){
#ifdef LOCAL
	freopen("data.in", "r", stdin);
#endif
	int r, c;

	while(scanf("%d%d", &r, &c), r || c){
		bitset<C> map[R];
		int ans = 0;

		bool x;
		for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++){
			cin >> x;
			map[i][j] = x;

			//cout << map[i][j] << endl;
		}

		for(int i = 0; i < 1 << r; i++){
			int sum = 0;

			for(int j = 0; j < r; j++){
				if(i & (1 << j))
					map[j].flip();
			}

			for(int j = 0; j < c; j++){
				int temp = 0;
				for(int i = 0; i < r; i++){
					if(map[i][j])
						temp++;
				}

				sum += max(temp, r - temp);
			}
			ans = max(ans, sum);

			for(int j = 0; j < r; j++){
				if(i & (1 << j))
					map[j].flip();
			}
		}

		cout << ans << endl;
	}

	return 0;
}
