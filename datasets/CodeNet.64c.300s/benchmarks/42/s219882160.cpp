#include <iostream>


using namespace std;

int main(){
	int N,M;
	while(cin >> N,N){
		int map[21][21]={0},num = 0,l;
		int x,y;
		for(int i = 0;i < N;i++,num++) {
			cin >> x >> y;
			map[x][y] = 1;
		}
		x = 10;
		y = 10;
		cin >> M;
		char d;
		for(int i = 0;i < M;i++){
			cin >> d >> l;
			for(;l > 0;l--){
				if(d == 'N') y++;
				if(d == 'E') x++;
				if(d == 'S') y--;
				if(d == 'W') x--;
				num -= map[x][y];
				map[x][y] = 0;
			}
		}
		if(num == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
        }
}