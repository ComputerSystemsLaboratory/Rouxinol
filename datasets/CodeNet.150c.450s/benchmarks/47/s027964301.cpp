#include <cstdio>
using namespace std;

int main() {
	int W;
	int H;
	int x;
	int y;
	int r;
	scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(r<=(y-0)&&r<=(x-0)&&r<=(H-y)&&r<=(W-x)){
	printf("Yes\n");
	}else{
	printf("No\n");
	}
	return 0;
}