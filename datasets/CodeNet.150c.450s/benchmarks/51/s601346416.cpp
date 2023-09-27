#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main(){
	bool a[30];
	int b[28];
	for(int i=0;i<30;i++){
		a[i]=false;
	}
	for(int i=0;i<28;i++){
		std::cin>>b[i];
		a[b[i]-1]=true;
	}
	for(int i=0;i<30;i++){
		if(a[i]==false){
			std::cout<<i+1<<std::endl;
		}
	}
}