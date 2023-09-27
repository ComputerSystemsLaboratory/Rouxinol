#include <iostream>
using namespace std;

int main(){
	int field[10][10000],copy[10][10000];
	int r,c;
	while(1){
		cin >> r >> c;
		if(!r) break;
		for(int i = 0;i < r;i++){
			for(int j = 0;j < c;j++){
				cin >> field[i][j];
			}
		}
		int ma = 0;
		for(int i = 0;i < 1 << r;i++){
			for(int j = 0;j < r;j++){
				for(int k = 0;k < c;k++){
					copy[j][k] = (field[j][k] + ((i >> j) & 1)) % 2;
				}
			}
			int res = 0;
			for(int j = 0;j < c;j++){
				int cnt = 0;
				for(int k = 0;k < r;k++){
					if(copy[k][j]) cnt++;
				}
				res += max(cnt,r - cnt);
			}
			ma = max(ma,res);
		}
		cout << ma << endl;
	}
	return 0;
}