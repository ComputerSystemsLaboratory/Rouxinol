#include<iostream>
#include<string>
int room[4][3][10];
template<typename T>
T input(){
	T t;
	std::cin>>t;
	return t;
}
int main(){
	for(int i=0;i<4;++i){
		for(int j=0;j<3;++j){
			for(int k=0;k<10;++k){
				room[i][j][k]=0;
			}
		}
	}
	const int n=input<int>();
	for(int i=0;i<n;++i){
		const int b=input<int>();
		const int f=input<int>();
		const int r=input<int>();
		const int v=input<int>();
		room[b-1][f-1][r-1]+=v;
	}
	for(int i=0;i<4;++i){
		for(int j=0;j<3;++j){
			for(int k=0;k<10;++k){
				std::cout<<" "<<room[i][j][k];
			}
			std::cout<<std::endl;
		}
		if(i!=3)std::cout<<std::string(20,'#')<<std::endl;
	}
	return 0;
}