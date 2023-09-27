#include<iostream>
int main(){
	int a[4],b[4],i,n,hit,blow;
	
		while(std::cin>>a[0]){
		hit=0;
		blow=0;
		for(i=1;i<4;i++){
			std::cin>>a[i];
			}
		for(i=0;i<4;i++){
			std::cin>>b[i];
			}
		
		for(i=0;i<4;i++){
			for(n=0;n<4;n++){
				if(a[i]==b[n]){
					if(i==n){
						hit++;
						}
					else blow++;
					}
				}
			}
		
		std::cout<<hit<<" "<<blow<<std::endl;
		}
	return 0;
	
	
	}