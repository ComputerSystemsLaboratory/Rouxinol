#include <iostream>
#include <vector>
int main(){
	int n;
	std::cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++){
		std::cin>>v[i];
	}
	int max=v[0],min=v[0];
        long long int all=0;
	for(int i=0;i<n;i++){
		if(max<v[i]){
			max=v[i];
		}
		if(min>v[i]){
			min=v[i];
		}
		all=all+v[i];
	}
	std::cout<<min<<" "<<max<<" "<<all<<std::endl;
}