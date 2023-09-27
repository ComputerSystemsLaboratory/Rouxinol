#include <iostream>

int main(){
	int n,a,b,c,d,i;
	while(std::cin>>n&&n){
	i=0;
	for(a=0;a<10;++a){
		for(b=0;b<10;++b){
			for(c=0;c<10;++c){
				for(d=0;d<10;++d){
					if(a+b+c+d==n)
						i++;
					}
				}
			}
		}
		std::cout<<i<<std::endl;
		}
	 return 0;
	}