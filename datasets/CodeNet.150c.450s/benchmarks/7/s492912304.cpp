#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	const int N=10;
	int height[N];
	for(int i=0;i<10;i++){
		scanf("%d",&height[i]);
	}
	sort(height,height+N);
	reverse(height,height+N);
	for(int j=0;j<3;j++){
		printf("%d\n",height[j]);
	}
	return 0;
}