#include<iostream>
int main(){
	int a,b,i,n;
	a=100000;
	std::cin>>n;
	for(i=0;i<n;i++){
		a=a*1.05;
		b=a;
		if(a%1000!=0){
			b=a-a%1000;
			a=b+1000;
			}
		}
	std::cout<<a<<std::endl;

    return 0;
}