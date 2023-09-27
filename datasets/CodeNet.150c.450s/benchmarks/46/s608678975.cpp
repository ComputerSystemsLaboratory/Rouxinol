#include <iostream>

int main(){
	int n;
	int x;
	while(true){
		std::cin>>n>>x;
		if(n==0&&x==0){
			break;
		}
		int count=0;
		for(int i=1;i<=n-2;i++){
			if(i>x){
				break;
			}
			for(int j=i+1;j<=n-1;j++){
				if(i+j>x){
					break;
				}
				for(int k=j+1;k<=n;k++){
					if(i+j+k==x){
						count++;
					}
					if(i+j+k>x){
						break;
					}
				}

			}
		}
		std::cout<<count<<std::endl;
	}
	return 0;
}