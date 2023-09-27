#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
	int N;
	while (1){
		cin >> N;
		if (N == 0) break;
		int n, d;
		vector<int> nx, ny;
		nx.push_back(0); ny.push_back(0);
		int minX = 0, maxX = 0, minY = 0, maxY = 0;
		for (int i = 0; i < N-1; i++){
			cin >> n >> d;
			int dx, dy;
			switch (d){
			case 0:
				dx = nx[n] - 1;
				dy = ny[n];
				break;
			case 1:
				dx = nx[n];
				dy = ny[n] - 1;
				break;
			case 2:
				dx = nx[n] + 1;
				dy = ny[n];
				break;
			case 3:
				dx = nx[n];
				dy = ny[n] + 1;
				break;
			}
			nx.push_back(dx);
			ny.push_back(dy);
			if (minX > dx) minX = dx;
			if (maxX < dx) maxX = dx;
			if (minY > dy) minY = dy;
			if (maxY < dy) maxY = dy;
		}
		if (N == 1){ cout << 1 << " " << 1 << endl; continue; }
		int h = abs(maxY - minY) + 1;
		int w = abs(maxX - minX) + 1;
		cout << w << " " << h << endl;
	}
	return 0;
}