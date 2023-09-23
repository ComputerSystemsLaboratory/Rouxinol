#include<iostream>
#include<string>
#include<vector>
#include <utility>

int main(){
	int x[99999],y[99999],i=0;
	std::cin>>x[i]>>y[i];
	i++;
	while(x[i-1]!=0||y[i-1]!=0){
		std::cin>>x[i]>>y[i];
		i++;
	}
	i=0;
	while(x[i]!=0||y[i]!=0){
		if(x[i]>y[i]){
			std::swap(x[i],y[i]);
		}
		std::cout<<x[i]<<" "<<y[i]<<std::endl;
		i++;
	}
	return 0;
}