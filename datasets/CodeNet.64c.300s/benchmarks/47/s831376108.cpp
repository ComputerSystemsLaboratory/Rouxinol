#include<iostream>
int intager[101]={0};

int main(){
	int a;
	int max=0;
	while(std::cin>>a){
		intager[a]+=1;
		if(intager[a]>max)max=intager[a];
	}
	for(int i=1;i<101;++i){
		if(intager[i]==max)std::cout<<i<<std::endl;
	}
	return 0;
}