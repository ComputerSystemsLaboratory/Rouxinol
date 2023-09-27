#include <iostream>
using namespace std;

int main() {
	int n,m,x,y,X,Y,flag;
	int a[22][22];
	char c;
	while(1){
		flag = 0;
		X = Y = 10;
		for(int i = 0;i < 22;i++){
			for(int j = 0;j < 22;j++){
				a[i][j] = 0;
			}
		}
		cin >> n;
		if(n == 0)break;
		for(int i = 0;i < n;i++){
			cin >> x >> y;
			a[y][x] = 1;
		}
		cin >> m;
		for(int j = 0;j < m;j++){
			cin >> c >> n;
			if(c == 'N'){
				for(int i = Y;Y <= i + n;Y++){
					a[Y][X] = 0;
				}
				Y--;
			}
			else if(c == 'E'){
				for(int i = X;X <= i + n;X++){
					a[Y][X] = 0;
				}
				X--;
			}
			else if(c == 'S'){
				for(int i = Y;Y >= i - n;Y--){
					a[Y][X] = 0;
				}
				Y++;
			}
			else if(c == 'W'){
				for(int i = X;X >= i - n;X--){
					a[Y][X] = 0;
				}
				X++;
			}
		}
		for(int i = 0;i < 22;i++){
			for(int j = 0;j < 22;j++){
				if(a[i][j] == 1)flag = 1;
			}
		}
		if(flag == 0)cout << "Yes" <<endl;
		else cout <<"No"<<endl;
	}
	return 0;
}