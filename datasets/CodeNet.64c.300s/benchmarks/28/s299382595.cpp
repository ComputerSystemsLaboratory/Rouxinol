#include <cstdio>
using namespace std;

int main(){
	int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	if(x - r >= 0 && x + r <= W && y - r >= 0 && y + r <= H){
		printf("%s\n", "Yes");
	}else{
		printf("%s\n", "No");
	}
	return 0;
}