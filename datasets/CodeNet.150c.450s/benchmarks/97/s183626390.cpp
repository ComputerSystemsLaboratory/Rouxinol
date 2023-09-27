#include<iostream>
#include<algorithm>

using namespace std;
int x[1080], y[1080];
int n, d, m;
int minx, miny, maxx, maxy;
int main(){
	while(cin >> m, m){
		x[0] = y[0] = 0;
		minx = miny = maxx = maxy = 0;
		for(int i = 1;i < m;i++){
			cin >> n >> d;
			switch(d){
				case 0:
					x[i] = x[n] - 1;
					y[i] = y[n];
					break;
				case 1:
					y[i] = y[n] - 1;
					x[i] = x[n];
					break;
				case 2:
					x[i] = x[n] + 1;
					y[i] = y[n];
					break;
				case 3:
					y[i] = y[n] + 1;
					x[i] = x[n];
					break;
			}
			maxx = max(maxx, x[i]);
			maxy = max(maxy, y[i]);
			minx = min(minx, x[i]);
			miny = min(miny, y[i]);
		}
		cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
	}
	return 0;
}