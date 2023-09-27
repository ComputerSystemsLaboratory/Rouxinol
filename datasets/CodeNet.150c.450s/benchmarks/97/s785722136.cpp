#include <stdio.h>
#include <vector>

using namespace std;

int main(void){
	int i, N, n, d, xmin, ymin, xmax, ymax;
	const int dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};
	vector<int> x, y;
	while(1){
		scanf("%d",&N);
		if(N == 0)
			break;
		x.push_back(1),y.push_back(1);
		x.at(0) = y.at(0) = 0;
		for(i = 1;i < N;i++){
			scanf("%d%d",&n,&d);
			x.push_back(1),y.push_back(1);
			x.at(i) = x.at(n) + dx[d];
			y.at(i) = y.at(n) + dy[d];
		}
		xmin = ymin = 0x7FFFFFFF;
		xmax = ymax = 0x80000000;
		for(i = 0;i < N;i++){
			xmax = max(xmax,x.at(i) + 1);
			ymax = max(ymax,y.at(i) + 1);
			xmin = min(xmin,x.at(i));
			ymin = min(ymin,y.at(i));
		}
		printf("%d %d\n",xmax - xmin,ymax - ymin);
		while(x.size()){
			x.pop_back();
			y.pop_back();
		}
	}
	return 0;
}