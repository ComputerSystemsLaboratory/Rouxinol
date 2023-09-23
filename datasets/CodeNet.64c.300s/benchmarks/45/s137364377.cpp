#include<iostream>

int main(){
	int n, m, p;
	while(std::cin >> n >> m >> p, n){
		int mn, s = 0;

		for(int i=1;i<=n;i++){
			int j;
			std::cin >> j;
			if(i == m)mn = j;
			s += j;
		}
		if(mn == 0)std::cout << 0 << std::endl;
		else std::cout << s*(100-p)/mn << std::endl;
	}
}