#include <iostream>
using namespace std;

int main() {
	
	int x, y;
	
	while(1){
		cin >> x >> y;
		if(x==0 && y==0) break;
		
		if(x < y){
			printf("%d %d\n", x, y);
		}else{
			printf("%d %d\n", y, x);
		}
	}
	
	return 0;
}