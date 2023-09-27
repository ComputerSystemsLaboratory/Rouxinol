#include<iostream>

int main(){
	int a,b,i,n;
	while(std::cin>>a>>b){
		i=1;
		for(n=1;n>0;n++){
			if(i<=a+b){
				if(a+b<i*10){
					std::cout<<n<<std::endl;
					n=-1;
				}else{
					i=i*10;
				}
			}
		}
	}
	return 0;
}