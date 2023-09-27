#include <iostream>
#include <algorithm>
#include <string.h>

int x_size, y_size;

using namespace std;

int rev(int r, int map[][10])
{
	int tmap[10000][10];
	int ret = 0;
	
	for (int i = 0; i < y_size; i++){
		if ((r >> i) & 1 == 1){
			for (int j = 0; j < x_size; j++){
				tmap[j][i] = (map[j][i] == 1 ? 0 : 1);
			}
		}
		else {
			for (int j = 0; j < x_size; j++){
				tmap[j][i] = map[j][i];
			}
		}
	}
	for (int i = 0; i < x_size; i++){
		int count[2] = {0, 0};
		for (int j = 0; j < y_size; j++){
			count[tmap[i][j]]++;
		}
		ret += max(count[0], count[1]);
	}
	
	return (ret);
}

int main(void)
{
	while (1){
		int map[10000][10];
		int ans = 0;
		
		cin >> y_size >> x_size;
		
		if (y_size == 0 && x_size == 0)break;
		
		for (int y = 0; y < y_size; y++){
			for (int x = 0; x < x_size; x++){
				cin >> map[x][y];
			}
		}
		
		for (int i = 0; i <= (1 << y_size); i++){
			ans = max(ans, rev(i, map));
		}
		
		cout << ans << endl;
	}
	return (0);
}