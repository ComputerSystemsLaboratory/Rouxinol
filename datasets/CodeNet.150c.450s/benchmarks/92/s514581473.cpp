#include <iostream>

int main(){
	int a, b ,i ,n ;
	while(std::cin>>a>>b){
	i=1;
	for(n=1;a+b>=i*10;n++){
	i=i*10;
	}
	std::cout<<n<<std::endl;
}
return 0;
}