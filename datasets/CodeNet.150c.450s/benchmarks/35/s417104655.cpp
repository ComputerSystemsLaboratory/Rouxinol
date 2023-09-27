#include <iostream>
int main(){
	int n, v[5000], m;
	while(std::cin >> n, m=n){
		for(;m--;)std::cin >> v[m];

		m = *v;
		for(int i=0;i<n;i++)
			for(int j=i,k=v[i];j<n;j++,k+=v[j])
				m=k>m?k:m;

		std::cout << m << '\n';
	}	
}