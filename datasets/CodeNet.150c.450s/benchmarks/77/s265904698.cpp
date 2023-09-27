#include <iostream>
using namespace std;
int main(){
	int N, i, j;
	while( 1 ){
		cin >> N;
		if( N == 0 ) break;
		int x, y;
		pair<int, int> robot = make_pair(10,10);
		int map[21][21] = {{}};
		for( i = 0; i < N; i++ ){
			cin >> x >> y;
			map[x][y] = 1;
		}
		int M;
		cin >> M;
		char news;
		int dist;
		for( i = 0; i < M; i++ ){
			cin >> news >> dist;
			for( j = 0; j < dist; j++ ){
				if( news == 'N' ) robot.second += 1;
				if( news == 'E' ) robot.first += 1;
				if( news == 'W' ) robot.first -= 1;
				if( news == 'S' ) robot.second -= 1;
				if( map[robot.first][robot.second] ) map[robot.first][robot.second] = 0;
			}
		}
		for( i = 0; i <= 20; i++ ){
			for( j = 0; j <= 20; j++ ){
				if( map[i][j] == 1 ) goto end;
			}
		}
		end:
		if( i == 21 && j == 21 ) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}