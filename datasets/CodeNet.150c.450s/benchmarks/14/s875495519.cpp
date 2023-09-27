#include <iostream>
#include <cstdio>
int main(){
	int n,x,i;
	std::cin>>n;
	for(i=1;i<=n;i++){
		x=i;
		if(x%3==0 || x%10==3)
			std::cout<< " " <<i;
		else{
			while(x){
				x/=10;				
			if(x%10==3)break;			
				}
			if(x%10==3)
				std::cout<< " " <<i;		
			}
	}
	std::cout<<std::endl;
	return 0;
}