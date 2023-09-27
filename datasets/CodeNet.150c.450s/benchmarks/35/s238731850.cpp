#include <iostream>
#include <vector>
int main(){
	int n;
	while(std::cin >> n, n){
		std::vector<int> v;
		for(int i=0;i<n;i++){
			int a;
			std::cin >> a;
			v.push_back(a);
		}

		int max = v[0];
		for(int i=0;i<n;i++){
			int k = 0;
			for(int j=i;j<n;j++){
				k += v[j];
				if(k > max)max = k;
			}
		}

		std::cout << max << std::endl;
	}	
}