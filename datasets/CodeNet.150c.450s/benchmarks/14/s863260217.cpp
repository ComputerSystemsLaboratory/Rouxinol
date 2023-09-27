#include <iostream>

int main() {
	int i=1;
	int n,x;
	std::cin >> n;
	while(n>=i){
		x=i;
		if(x%3==0){
			std::cout << " " << i;
		}else{
			while(x!=0){
				if(x%10==3){std::cout << " " << i;break;}
				x=x/10;
			}
		}
		i++;
	}
	std::cout <<std::endl;
	return 0;
}