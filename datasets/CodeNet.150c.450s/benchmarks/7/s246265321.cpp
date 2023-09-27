#include <stdio.h>
#include <queue>

using namespace std;

int main(void) {
	int height[10];
	priority_queue<int,vector<int> > que;
	
	for(int i=0;i<10;i++){
		scanf("%d",&height[i]);
		que.push(height[i]);
	}
	for(int i=0; i<3; i++){
		printf("%d\n",que.top());
		que.pop();
	}
	
	return 0;
}