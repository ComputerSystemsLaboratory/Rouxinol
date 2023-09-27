#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

int main(void){
	int n;

	while(cin >> n, n){
		vector< pair<int, int> > p;
		int xmax, xmin, ymax, ymin;

		xmin = ymin = xmax = ymax = 0;
		p.push_back(pair<int, int>(0, 0));

		for(int i=0; i<n-1; i++){
			int index, d;
			cin >> index >> d;
			int nx = p[index].first + dx[d];
			int ny = p[index].second + dy[d];

			xmax = max(xmax, nx);
			xmin = min(xmin, nx);
			ymax = max(ymax, ny);
			ymin = min(ymin, ny);

			p.push_back(pair<int, int>(nx, ny));
		}

		printf("%d %d\n", xmax+1-xmin, ymax+1-ymin);

	}


	return 0;
}