
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <list>
#include <algorithm>

using namespace std;

int min(int p, int q) {
	if( p > q ) return q;
	return p;
}

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1){
		int n,m;
		cin >> n >> m;
		if( n == 0 && m == 0 ) break;

		vector<int> x,y;
		int sum = 0;
		int xmax, ymax;
		x.push_back(0);
		y.push_back(0);

		for(int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			sum += tmp;
			y.push_back(sum);
		}
		ymax = sum;
		sum = 0;
		for(int i = 0; i < m; i++) {
			int tmp;
			cin >> tmp;
			sum += tmp;
			x.push_back(sum);
		}
		xmax = sum;

		vector<int> dx,dy;
		int width = x.size();
		int height = y.size();

		for(int i = 0; i <= xmax; i++)
			dx.push_back(0);
		for(int i = 0; i <= ymax; i++)
			dy.push_back(0);

		for(int i = 0; i < width; i++)
			for(int j = i + 1; j < width; j++)
				dx.at( x.at(j) - x.at(i) ) ++;

		for(int i = 0; i < height; i++)
			for(int j = i + 1; j < height; j++)
				dy.at( y.at(j) - y.at(i) ) ++;

		int ans = 0;
		int size = min( dx.size(), dy.size() );

		for(int i = 0; i < size; i++)
			ans += dx.at(i) * dy.at(i);

		cout << ans << endl;
	}

	//while(1){}
	return 0;
}