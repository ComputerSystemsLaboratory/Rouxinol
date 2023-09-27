#include <iostream>
#include <algorithm>
using namespace std;

struct square{
	int x;
	int y;
};

int dx[] = {
	-1, 0, 1, 0
};

int dy[] = {
	0, 1, 0, -1
};

square squares[200];

int main(){
	int N;
	while(cin >> N){
		if(N == 0) break;
		squares[0].x = squares[0].y = 0;
		for(int i = 1; i < N; i++){
			int n, d;
			cin >> n >> d;
			squares[i].x = squares[n].x + dx[d];
			squares[i].y = squares[n].y + dy[d];
		}
		int minx = 0, miny = 0;
		int maxx = 0, maxy = 0;
		for(int i = 0; i < N; i++){
			minx = min(minx, squares[i].x);
			miny = min(miny, squares[i].y);
			maxx = max(maxx, squares[i].x);
			maxy = max(maxy, squares[i].y);
		}
		int width = maxx - minx + 1;
		int height = maxy - miny + 1;
		cout << width << " " << height << endl;
	}
	return 0;
}