#include<iostream>

int sum[2];

int main(){
	for(int i=0;i<2;i++){
		for(int j=0,a;j<4;j++){
			std::cin>>a;
			sum[i]+=a;
		}
	}
	std::cout<<std::max(sum[0],sum[1])<<std::endl;
	return 0;
}