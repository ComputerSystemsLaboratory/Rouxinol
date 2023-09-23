#include<iostream>

int main(){
int a[4],b[4],i,j,H,B;
	while(std::cin>>a[0]){
		for(i=1;i<4;i++){
			std::cin>>a[i];
		}
		for(j=0;j<4;j++){
			std::cin>>b[j];
		}
		H=0;
		B=0;
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(a[i]==b[j]){
					if(i==j){
						H++;
					}
					else{
						B++;
					}
				}
			}
		}
		std::cout<< H << " " << B <<std::endl;
	}
return 0;
}