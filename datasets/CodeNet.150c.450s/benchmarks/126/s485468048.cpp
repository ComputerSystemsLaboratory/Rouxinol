#include <iostream>

int memo[40][40];

using namespace std;

int fanc(int x, int y)
{
	if (x < 0 || y < 0){
		return (0);
	}
	if (memo[x][y] != -1){
		return (memo[x][y]);
	}
	if (x == 0 && y == 0){
		return (1);
	}
	
	
	memo[x][y] = fanc(x - 1, y) + fanc(x, y - 1);
	return (memo[x][y]);
}

int main(void)
{
	int x, y;
	int n;
	
	while (1){
		for (int i = 0; i < 40; i++){
			for (int j = 0; j < 40; j++){
				memo[i][j] = -1;
			}
		}
		
		cin >> x >> y;
		if (x == 0 && y == 0)break;
		cin >> n;
		for (int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			memo[x - 1][y - 1] = 0;
		}
		
		cout << fanc(x - 1, y - 1) << endl;
		
	}
	return (0);
}