#include<iostream>

int main(){
	
	char a;
	int w,n,tate[30],b,c,d,i;

	std::cin>>w;
	for(i=1;i<=w;i++){
		tate[i]=i;
		}
	std::cin>>n;
	
	for(i=0;i<n;i++){
		std::cin>>b>>a>>c;
		d=tate[b];
		tate[b]=tate[c];
		tate[c]=d;
		}
		
	for(i=1;i<=w;i++){
		std::cout<<tate[i]<<std::endl;
		}

	return 0;
	
	}