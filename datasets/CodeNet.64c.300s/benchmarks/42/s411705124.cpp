#include <iostream>
using namespace std;
const int size = 21;
int map[size][size] = { 0 };

int main(){
	int n,m;
	while (1){
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < size; i++){
			for (int j = 0; j < size; j++){
				map[i][j] = 0;
			}
		}
		int cnt = 0; //???????????????????????°
		int rbx = 10, rby = 10; //???????????§?¨?
		//???????????????????????°
		for (int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}
		//??????????????????
		cin >> m;
		for (int i = 0; i < m; i++){
			char d;
			int t;
			cin >> d >> t;
			switch (d){
			case 'N':
				for (int i = 0; i < t; i++){
					rby++;
					if (map[rby][rbx] == 1){
						cnt++;
						map[rby][rbx] = 0;
					}
				}
				break;

			case 'E':
				for (int i = 0; i < t; i++){
					rbx++;
					if (map[rby][rbx] == 1){
						cnt++;
						map[rby][rbx] = 0;
					}
				}
				break;

			case 'S':
				for (int i = 0; i < t; i++){
					rby--;
					if (map[rby][rbx] == 1){
						cnt++;
						map[rby][rbx] = 0;
					}
				}
				break;

			case 'W':
				for (int i = 0; i < t; i++){
					rbx--;
					if (map[rby][rbx] == 1){
						cnt++;
						map[rby][rbx] = 0;
					}
				}
				break;
			}
		}
		if (cnt == n){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
}