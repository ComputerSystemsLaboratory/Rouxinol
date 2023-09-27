#include <iostream>
#include <vector>

int main(){
	while(true){
		int n,a=0,b=0;
		std::cin>>n;
		if(n==0){
			break;
		}
		std::vector<int> v1(n,0);
		std::vector<int> v2(n,0);
		for(int i=0;i<n;i++){
			std::cin>>v1[i]>>v2[i];
			if(v1[i]>v2[i]){
				a+=v1[i]+v2[i];
			}else if(v1[i]<v2[i]){
				b+=v1[i]+v2[i];
			}else{
				a+=v1[i];
				b+=v2[i];
			}
		}
		std::cout<<a<<" "<<b<<std::endl;
		
	}
}