#include<iostream>

int main(){
		int w,n,i,a[31],y,z,j;
		char x;
		std::cin>>w;
		std::cin>>n;
		for(i=1;i<=w;i++){
			a[i]=i;
		}
		for(i=0;i<n;i++){
			std::cin>>y>>x>>z;
			j=a[y];
			a[y]=a[z];
			a[z]=j;
		}
		for(i=1;i<=w;i++){
		std::cout<<a[i]<<std::endl;
		}


	return 0;
}