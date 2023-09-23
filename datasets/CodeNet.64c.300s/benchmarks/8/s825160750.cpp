#include<iostream>
int n;
int main(){
	std::cin>>n;
	for(int i=1;i<=n;++i){
		if(i%3==0){
			std::cout<<" "<<i;
		}else for(int j=i;j>0;j/=10){
			if(j%10==3){
				std::cout<<" "<<i;
				break;
			}
		}
	}
	std::cout<<std::endl;
	return 0;
}