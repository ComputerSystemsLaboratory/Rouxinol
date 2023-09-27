#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <math.h>

#define PREP(i, m, n) for(int i = m; i < n; i++)
#define MREP(i, m, n) for(int i = m - 1; i >= n; i--)
using namespace std;

class point{
	public:
		int x;
		int y;
		point(int x = 0, int y = 0):x(x), y(y){}
		void setPos(int dir){
			switch(dir){
			case 0:
				x -= 1;
				break;
			case 1:
				y -= 1;
				break;
			case 2:
				x += 1;
				break;
			case 3:
				y += 1;
				break;
			default:
				break;
			}
		}

};


int main(){
	int n = 0;
	while(cin >> n && n != 0){
		if(n == 1){
			cout << 1 << " " << 1 << endl;
			continue;
		}
		
		vector<point> box;
		int m = 0, dir = 0;
		
		for(int i = 0; i < n; i++){
			if(!i){
				point a;
				box.push_back(a);
				continue;
			}
			cin >> m >> dir;
			point a(box[m].x, box[m].y);
			a.setPos(dir);
			box.push_back(a);
		}

		int maxX = 0, minX = 0, maxY = 0, minY = 0;
		for(int i = 0; i < box.size(); i++){
			if(maxX < box[i].x) maxX = box[i].x;
			if(minX > box[i].x) minX = box[i].x;
			if(maxY < box[i].y) maxY = box[i].y;
			if(minY > box[i].y) minY = box[i].y;
		}

		cout << maxX - minX + 1 << " " << maxY - minY + 1 << endl;
	}
	return 0;
}