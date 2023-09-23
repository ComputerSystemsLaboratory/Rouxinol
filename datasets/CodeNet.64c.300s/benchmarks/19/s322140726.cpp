#include <iostream>
int main(){
	int n, v[5000], m;
	while(std::cin >> n, n){
		for(int i=0;i<n;i++)std::cin >> v[i];

		m = v[0];
		for(int i=0;i<n;i++)
			for(int j=i,k=v[i];j<n;j++,k+=v[j])
				if(k>m)m=k;

		std::cout << m << '\n';
	}	
}