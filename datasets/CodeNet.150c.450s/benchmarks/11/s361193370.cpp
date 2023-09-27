#include <iostream>
#define TYPE 4
#define CLASS 13

int main(){
	int num;
	int array[TYPE][CLASS]={};
	char type[4]={'S','H','C','D'};
	std::cin>>num;
	for(int i=0;i<num;i++){
		char c;
		int  n;
		std::cin>>c;
		std::cin>>n;
		for(int j=0;j<TYPE;j++){
			if(c==type[j]){
				array[j][n-1]=1;
			}
		}
	}
	for(int i=0;i<TYPE;i++){
		for(int j=0;j<CLASS;j++){
			if(!array[i][j]){
				std::cout<<type[i]<<" "<<j+1<<std::endl;
			}
		}
	}
	return 0;
}