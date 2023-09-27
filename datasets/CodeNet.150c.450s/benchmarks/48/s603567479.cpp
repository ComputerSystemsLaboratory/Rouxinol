#include<iostream>

int main(){
	int e;
	while(1){
		std::cin >> e;
		if(!e)break;
		int m = 1000001;
		for(int i=0;i*i*i<=e;i++){
			for(int ii=0;i*i*i + ii*ii<=e;ii++){
				int x = e-i*i*i-ii*ii;
				int tmp = i+ii+x;
				if(tmp < m) m = tmp;
			}
		}
		std::cout << m << std::endl;
	}
	return 0;
}