#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;
int val[10][5];

int main()
{
	int H;
	while(cin >> H, H){
		for(int i = 0;i < H;i++){
			for(int j = 0;j < 5;j++){
				cin >> val[i][j];
			}
		}
		int res = 0;
		bool flag;
		do{
			flag = false;
			for(int i = 0;i < H;i++){
				int x = val[i][2];
				if(x == 0) continue;
				int l = 2, r = 3;
				while(l >= 0 && val[i][l] == x) l--;
				l++;
				while(r < 5 && val[i][r] == x) r++;
				if(r - l < 3) continue;
				flag = true;
				for(int j = l;j < r;j++){
					res += val[i][j];
					val[i][j] = 0;
				}
			}
			for(int k = 0;k < 5;k++){
				for(int i = H - 1, j = H - 1;i >= 0;i--){
					if(val[i][k] > 0){
						if(i != j) swap(val[i][k], val[j][k]);
						j--;
					}
				}
			}
		} while (flag);
		cout << res << endl;
		for(int i = 0;i < H;i++){
			for(int j = 0;j < 5;j++){
				val[i][j] = 0;
			}
		}
	}
}
