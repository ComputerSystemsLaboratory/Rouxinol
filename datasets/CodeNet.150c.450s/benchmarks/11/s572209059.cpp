#include <iostream>
#include <cstdio>
int main(){
	int n,i,j,num;
	int a[4][13]={0};
	char c;
	std::cin>>n;
	for(i=0;i<n;i++){
		std::cin>>c>>num;
		if(c=='S')
			a[0][num-1]=1;
		if(c=='H')
			a[1][num-1]=1;
		if(c=='C')
			a[2][num-1]=1;
		if(c=='D')
			a[3][num-1]=1;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(a[i][j]==0){
				if(i==0) std::cout<<"S "<<j+1<<std::endl;
				if(i==1) std::cout<<"H "<<j+1<<std::endl;
				if(i==2) std::cout<<"C "<<j+1<<std::endl;
				if(i==3) std::cout<<"D "<<j+1<<std::endl;
			}
		}
	
	}
	return 0;
}