#include<iostream>

int main(){
	int a[4],b[4];
	while(std::cin>>a[0]){
		int hit=0,blow=0;
		for(int i=1;i<4;i++)std::cin>>a[i];
		for(int i=0;i<4;i++)std::cin>>b[i];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a[i]==b[j]){
					if(i==j)hit++;
					else blow++;
				}
			}
		}
		std::cout<<hit<<" "<<blow<<std::endl;
	}
	return 0;
}