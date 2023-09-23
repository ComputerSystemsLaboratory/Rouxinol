#include<iostream>

bool flg[30];

int main(){
	for(int i=0,a;i<28;i++){
		std::cin>>a;
		flg[a]=true;
	}
	for(int i=1;i<=30;i++){
		if(!flg[i])std::cout<<i<<std::endl;
	}
	return 0;
}