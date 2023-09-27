#include<iostream>
int main(){
	int n,sp=0,st[10];
	while(std::cin>>n)
		if(n)st[sp++]=n;
		else std::cout<<st[--sp]<<std::endl;
	return 0;
}