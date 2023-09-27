#include<iostream>
#include<stdio.h>

int main(){
	int w,n,i,a,b,d,f,e[31];
	char c;

	scanf("%d",&w);
	scanf("%d",&n);

	for(i=1;i<=w;i++){
	e[i]=i;
	}
	for(i=0;i<n;i++){
		std::cin>>a>>c>>b;
		d=e[a];
		e[a]=e[b];
		e[b]=d;
	}

	for(i=1;i<=w;i++){
		std::cout<<e[i]<<std::endl;
	}
	return 0;
}