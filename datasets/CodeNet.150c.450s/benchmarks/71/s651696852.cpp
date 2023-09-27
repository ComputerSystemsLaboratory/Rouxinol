#include<iostream>

int n,ans;

int sum(){
	ans = 0;
	int a=0,b=0,c=0,d=0;
	for(;a<10;a++){
		for(;b<10;b++){
			for(;c<10;c++){
				for(;d<10;d++)
					if(a+b+c+d==n)
						ans++;
				d=0;
			}
			c=0;
		}
		b=0;
	}
	return ans;
}

int main(){
	while(std::cin >> n)
		std::cout << sum() << std::endl;
	return 0;
}