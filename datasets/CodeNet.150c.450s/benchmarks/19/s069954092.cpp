#include <iostream>
using namespace std;
int main(void){
	int x, y, i=1;
	while(1){
		cin >>x >>y;
		if(x == 0 && y == 0){
			break;
		}
		if(x<y){
			cout <<x <<" " <<y <<endl;
		}else{
			cout <<y <<" " <<x <<endl;
		}
	}
	return 0;
}