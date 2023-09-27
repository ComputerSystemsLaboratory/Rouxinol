#include<bits/stdc++.h>
using namespace std;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };

int main(void){

	int n;

	while (cin >> n , n){

		vector<int> x, y;
		x.push_back(0);
		y.push_back(0);
		for (int i = 0; i < n - 1; i++){
			int num, way; cin >> num >> way;
			x.push_back(x[num] + dx[way]);
			y.push_back(y[num] + dy[way]);
		}

		int x_max = 0, x_min = 0, y_max = 0, y_min = 0;
		for (int i = 0; i < n; i++){
			x_max = max(x_max, x[i]);
			x_min = min(x_min, x[i]);
			y_max = max(y_max, y[i]);
			y_min = min(y_min, y[i]);
		}

		cout << x_max - x_min + 1 << " " << y_max - y_min + 1 << endl;

	}

	return 0;
}

/*
for(i=0;i<N;i++){
cin >> X[i];
}


for(i=0;i<N;i++){
for(j=0;j<N;j++){
cin >> X[i][j];
}
}
*/