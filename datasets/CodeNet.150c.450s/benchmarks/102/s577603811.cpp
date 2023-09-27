#include <iostream>
using namespace std;

int main() {
	int W,H,result,up;
	char c;
	int a[22][22];
	while(1){
		for(int i = 0;i <= 21;i++){
			for(int j = 0;j <= 21;j++){
				a[i][j] = 0;
			}
		}
		result = 1;
		cin >> W >> H;
		if(W == 0)break;
		for(int i = 1;i <= H;i++){
			for(int j = 1;j <= W;j++){
				cin >> c;
				if(c == '.')a[i][j] = 1;
				else if(c == '@')a[i][j] = 2;
			}
		}
		while(1){
			up = 0;
		for(int i = 1;i <= H;i++){
			for(int j = 1;j <= W;j++){
				if(a[i][j] == 2 && a[i-1][j] == 1){
					a[i-1][j] = 2;
					up++;
				}
				if(a[i][j] == 2 && a[i][j-1] == 1){
					a[i][j-1] = 2;
					up++;
				}
				if(a[i][j] == 2 && a[i+1][j] == 1){
					a[i+1][j] = 2;
					up++;
				}
				if(a[i][j] == 2 && a[i][j+1] == 1){
					a[i][j+1] = 2;
					up++;
				}
			}
		}
		result += up;
		if(up == 0)break;	
		}
	cout << result <<endl;
	}
	return 0;
}