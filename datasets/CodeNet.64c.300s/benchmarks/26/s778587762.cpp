#include <iostream>

long pow(long x, long y){
	if(y==0){
		return 1;
	}else if (y==1) {
		return x;
	}else if(y%2 == 0){
		long z = pow(x,y/2)%1000000007;
		return z*z%1000000007;

	}else{
		long z = pow(x,y/2)%1000000007;
		return (z*z%1000000007)*x%1000000007;
	}
}

int main(){
	long x , y;
	std::cin>>x>>y;
	std::cout<<pow(x,y)<<std::endl;
	return 0;
}