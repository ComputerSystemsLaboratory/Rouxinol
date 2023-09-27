#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	int N;
	while(1) {
		cin >> N;
		if(N==0) break;

		int point[N][2];
		point[0][0] = 0;
		point[0][1] = 0;
		for(int i=1; i<N; i++) {
			int n, d;
			cin >> n >> d;
			if(d==0) {
				point[i][0] = point[n][0] - 1;
				point[i][1] = point[n][1];
			} 
			if(d==1) {
				point[i][0] = point[n][0];
				point[i][1] = point[n][1] - 1;
			} 
			if(d==2) {
				point[i][0] = point[n][0] + 1;
				point[i][1] = point[n][1];
			} 
			if(d==3) {
				point[i][0] = point[n][0];
				point[i][1] = point[n][1] + 1;
			} 
		}

		int x[2], y[2];
		x[0] = 0;
		x[1] = 0;
		y[0] = 0;
		y[1] = 0;

		for(int i=1; i<N; i++) {
			if(point[i][0] < x[0]) x[0] = point[i][0];
			if(point[i][0] > x[1]) x[1] = point[i][0];
			if(point[i][1] < y[0]) y[0] = point[i][1];
			if(point[i][1] > y[1]) y[1] = point[i][1];
		}

		cout << x[1] - x[0] + 1 << ' ' << y[1] - y[0] + 1 << endl;
	}

	return 0;
}