#include <iostream>
int main(){
	int n=0,A=0,B=0;
	while(std::cin >> n, n){
		for(int i=0;i<n;i++){
			int a=0,b=0;
			std::cin>>a>>b;
			int ab=a+b;
			if(a>b){
				A+=ab;
			}else{
				if(a<b){
					B+=ab;
				}else{
					A+=a;
					B+=b;
				}
			}
		}
		std::cout<<A<<" "<<B<<std::endl;
		A=0,B=0;
	}
	return 0;
}