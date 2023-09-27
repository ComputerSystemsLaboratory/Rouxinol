#include <cstdio>
using namespace std;

int main(){
	int x, y;
	while(scanf("%d", &x)){
		if(x == 0){
			break;
		}
		x = 1000 - x;
		y = 0;
		while (x >= 500){
			x -= 500;
			y++;
		}
		while (x >= 100){
			x -= 100;
			y++;
		}
		while (x >= 50){
			x -= 50;
			y++;
		}
		while (x >= 10){
			x -= 10;
			y++;
		}
		while (x >= 5){
			x -= 5;
			y++;
		}
		while (x >= 1){
			x -= 1;
			y++;
		}
		printf("%d\n", y);
	}
	return 0;
}