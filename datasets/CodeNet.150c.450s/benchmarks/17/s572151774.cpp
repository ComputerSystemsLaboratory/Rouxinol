#include<iostream>

int main(){
	int a[5],i,j,n;
	for(i=0;i<5;i++){
	std::cin>>a[i];
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
			n=a[i];
			a[i]=a[j];
			a[j]=n;
			}
		}
	}
	std::cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<std::endl;
	return 0;
}