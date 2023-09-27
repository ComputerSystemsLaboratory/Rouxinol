#include<iostream>
int main(){
	int kane=100000,rishi,kiriage,n,i;
	std::cin>>n;
	for(i=0;i<n;i++){
		kane=kane*1.05;
		rishi=kane-100000;
		kiriage=rishi%1000;
		if(kiriage!=0){
			kiriage=1000-kiriage;
			}
		kane=kane+kiriage;
		}
	std::cout<<kane<<std::endl;
	return 0;
	}