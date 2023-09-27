#include<iostream>

int main(){
	int a,b,c,i,n;
	
	while(std::cin>>a>>b){
		c=a+b;
		n=0;
		i=1;
		while(i<=c){
		n++;
		i=i*10;
		}
	std::cout<<n<<std::endl;
		}

    return 0;
}