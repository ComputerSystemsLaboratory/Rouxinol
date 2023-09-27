#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;


struct Data{
	int x,y;
};

void func(int N){
	int most_left = 0,most_right = 0,most_up = 0,most_down = 0;

	int base,dist;

	Data data[N];
	data[0].x = 0,data[0].y = 0;

	for(int i = 1; i <= N-1; i++){
		scanf("%d %d",&base,&dist);
		switch(dist){
		case 0:
			data[i].x = data[base].x-1;
			data[i].y = data[base].y;
			break;
		case 1:
			data[i].x = data[base].x;
			data[i].y = data[base].y-1;
			break;
		case 2:
			data[i].x = data[base].x+1;
			data[i].y = data[base].y;
			break;
		case 3:
			data[i].x = data[base].x;
			data[i].y = data[base].y+1;
			break;
		}
		most_left = min(most_left,data[i].x);
		most_right = max(most_right,data[i].x);
		most_up = max(most_up,data[i].y);
		most_down = min(most_down,data[i].y);
	}

	printf("%d %d\n",most_right-most_left+1,most_up-most_down+1);

}

int main(){

	int N;

	while(true){
		scanf("%d",&N);
		if(N == 0)break;

		if(N==1){
			printf("1 1\n");continue;
		}

		func(N);
	}

    return 0;
}