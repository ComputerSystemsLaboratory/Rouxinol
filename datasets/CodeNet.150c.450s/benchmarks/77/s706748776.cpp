#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool check(vector< vector< int > > vv){
		for (int i = 0; i <= 20; i++){
				for (int j = 0; j <= 20; j++){
						if (vv[i][j] ) return false;
				}
		}
		return true;
}

int main(){
		while(1){
				int n; cin >> n;
				if (n == 0) break;
				vector< vector< int > > field(22, vector<int>(22, 0));
				vector<int> x(n),y(n);
				for (int i = 0; i < n; i++){
						cin >> x[i] >> y[i];
						field[x[i]][y[i]] = 1;
				}

				int m; cin >> m;
				int nx = 10; 
				int ny = 10;
				for (int i = 0; i < m; i++){
						//N:1, E:2, S:3, W:4
						char dir; cin >> dir;
						int dis; cin >> dis;
						if (dir == 'N'){
								for (int j = 1; j <= dis; j++){
										ny++;
										field[nx][ny] = 0;
								}
						}else if (dir == 'E'){
								for (int j = 1; j <= dis; j++){
										nx++;
										field[nx][ny] = 0;
								}
						}else if (dir == 'S'){
								for (int j = 1; j <= dis; j++){
										ny--;
										field[nx][ny] = 0;
								}
						}else if (dir == 'W'){
								for (int j = 1; j <= dis; j++){
										nx--;
										field[nx][ny] = 0;
								}
						}

				}
				if (check(field)){
						cout << "Yes" << endl;
				}else{
						cout << "No" << endl;
				}
		}
		return 0;
}