#include <iostream>
#include <algorithm>


using namespace std;

int main(){
	int dx[] = {-1, 0, 1, 0};
	int dy[] = {0, 1, 0, -1};

	int n;
	cin >> n;
	while( n != 0){
		int t, d;
		int tile[500][2];	
		tile[0][0] = 200;
		tile[0][1] = 200;
		for(int i = 1; i < n; i++){
			cin >> t >> d;
			tile[i][0] = tile[t][0] + dx[d];
			tile[i][1] = tile[t][1] + dy[d];
		}
		int tmin[2];
		tmin[0] = tmin[1] = 1000;
		int tmax[2];
		tmax[0] = tmax[1] = 0;
		
		for(int i = 0; i < n; i++){
			tmin[0] = min(tmin[0], tile[i][0]);
			tmax[0] = max(tmax[0], tile[i][0]);
			tmin[1] = min(tmin[1], tile[i][1]);
			tmax[1] = max(tmax[1], tile[i][1]);
		}

		cout << (tmax[0] - tmin[0]) + 1<< ' ' << (tmax[1] - tmin[1]) + 1<< endl;
		cin >> n;
	}
	return 0;
}