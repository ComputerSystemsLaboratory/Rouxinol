#include<iostream>

int main(){
	int w,n,tate[31],yoko1,yoko2,i,j;
	char c;

	
	std::cin>>w>>n;
	for(i=1;i<=w;i++){
		tate[i]=i;
	}

	for(i=0;i<n;i++){
		std::cin>>yoko1>>c>>yoko2;
		j=tate[yoko1];
		tate[yoko1]=tate[yoko2];
		tate[yoko2]=j;
	}

	for(i=1;i<=w;i++){
		std::cout<<tate[i]<<std::endl;
	}

		
	
	
  return 0;
}