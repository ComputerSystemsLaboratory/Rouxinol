
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int N;
		vector<int> box_x;
		vector<int> box_y;
		cin >> N;
		if( N == 0 ) break;

		box_x.push_back(0);
		box_y.push_back(0);

		for(int i = 0; i < N - 1; i++) {
			int tmp, dir;
			int dx, dy;
			cin >> tmp >> dir;
			switch(dir) {
				case 0:
					dx = -1;
					dy = 0;
					break;
				case 1:
					dx = 0;
					dy = 1;
					break;
				case 2:
					dx = 1;
					dy = 0;
					break;
				case 3:
					dx = 0;
					dy = -1;
					break;
			}
			box_x.push_back(box_x.at(tmp) + dx);
			box_y.push_back(box_y.at(tmp) + dy);
		}

		int xmin = 0, xmax = 0;
		for(int i = 0; i < box_x.size(); i++) {
			if( xmin > box_x.at(i) ) xmin = box_x.at(i);
			if( xmax < box_x.at(i) ) xmax = box_x.at(i);
		}
		int ymin = 0, ymax = 0;
		for(int i = 0; i < box_y.size(); i++) {
			if( ymin > box_y.at(i) ) ymin = box_y.at(i);
			if( ymax < box_y.at(i) ) ymax = box_y.at(i);
		}
		cout << xmax - xmin + 1 << " " << ymax - ymin + 1 << endl;

	}

	
	//while(1){}
	return 0;
}