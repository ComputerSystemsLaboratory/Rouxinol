#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n;
	int gems[21][21];
	while(cin >> n && n){
		memset(gems, 0, sizeof(gems));
		for(int i=0;i<n;i++){
			int x, y; cin >> x >> y;
			gems[x][y] = 1;
		}
		int px = 10, py = 10;
		gems[10][10] = 0;
		int m; cin >> m;
		for(int i=0;i<m;i++){
			char c; int d; cin >> c >> d;
			for(int j=0;j<d;j++){
				switch(c){
					case 'N': py++; break;
					case 'E': px++; break;
					case 'S': py--; break;
 					case 'W': px--; break;
				}
				gems[px][py] = 0;
			}
		}
		bool ok = true;
		for(int i=0;i<=20;i++){
			for(int j=0;j<=20;j++)
				if(gems[i][j]) ok = false;
		}
		cout << (ok ? "Yes" : "No") << endl;
	}
}