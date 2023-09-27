#include<iostream>

int main(){
	int d;
	while(std::cin>>d){
		int w=d,ans=0;
		while(w<=600-d){
			ans+=d*w*w;
			w+=d;
		}
		std::cout<<ans<<std::endl;
	}
	return 0;
}