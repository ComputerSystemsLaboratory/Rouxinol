#include <iostream>
int main(){
int a,b,c=1,d=0;
while(c=1){
	std::cin>>a;
	
	int z=-100000;

	if(a==0){
		return 0;
	}
	int aa[a];
	for(int t=1;t<=a;t++){
		std::cin>>b;
	
		aa[t]=b;
	}
    
	for(int s=1;s<=a;s++){
		
			for(int l=s;l<=a;l++){
				d=d+aa[l];
				if(z<d){
					z=d;
				}
			}d=0;
		
		
	}
	std::cout<<z<<std::endl;
	
}
}