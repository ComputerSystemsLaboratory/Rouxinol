#include <cstdio>
#include <iostream>

int main(){
	int W,H,x,y,r;
	std::scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
	if(x-r>=0 && x+r<=W && y-r>=0 && y+r<=H){
		std::cout << "Yes" << std::endl;
	}else{
		std::cout << "No" << std::endl;
	}
	return 0;
}