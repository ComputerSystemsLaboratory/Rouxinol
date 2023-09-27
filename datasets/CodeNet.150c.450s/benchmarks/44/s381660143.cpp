#include<iostream>

int main(){
	int a[4],b[4],c,d,i,j;
	while(std::cin>>a[0]){
	for(i=1;i<4;i++){
	std::cin>>a[i];
	}for(i=0;i<4;i++){
	std::cin>>b[i];
	}
	c=0;
	d=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j&&a[i]==b[j]){
			c++;
			}if(i!=j&&a[i]==b[j]){
			d++;
			}
		}
	}
	std::cout<<c<<" "<<d<<std::endl;
	}
	return 0;
}