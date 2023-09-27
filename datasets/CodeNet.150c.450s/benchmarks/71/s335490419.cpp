#include <iostream>

int main(){
	
	int e;
	int f=0;
	while(std::cin>>e){
		for(int a=0;a<10;a++){
			for(int b=0;b<10;b++){
				for(int c=0;c<10;c++){
					for(int d=0;d<10;d++){
						if(a+b+c+d==e){
							
							f++;
						}
		            }
		        }
		    }
		}
		std::cout<<f<<std::endl;
		f=0;
	}
    
    return 0;
    
}