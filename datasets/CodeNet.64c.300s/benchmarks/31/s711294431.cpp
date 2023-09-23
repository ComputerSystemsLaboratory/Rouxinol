#include <iostream>
int main(){
	int a[28],b[30]={};
	for(int i=0;i<28;i++){
		std::cin>>a[i];
	}
	for(int i=1;i<=30;i++){
		for(int j=0;j<28;j++){
			if(a[j]==i){
				b[i-1]=i;
			}
		}
	}
	for(int i=0;i<30;i++){
		if(b[i]==0){
			std::cout<<i+1<<std::endl;
		}
	}
	return 0;
}