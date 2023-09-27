#include <iostream>
#include <cstdlib>

int main(){
	int n;
	while(1){
		std::cin >> n;
		if(n==0) break;
		long a[n];
		for(int i=0;i<n;i++) std::cin >> a[i];
		long min = 2000000;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				min=std::min(min,std::abs(a[i]-a[j]));
			}
		}
		std::cout << min << std::endl;
	}
}

