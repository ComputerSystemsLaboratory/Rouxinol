#include<iostream>

int a[10];
bool J;

void dfs(int n,int left,int right){
	if(n==10)
		J=true;
    if(a[n]>left)
			dfs(n+1,a[n],right);
    if(a[n]>right)
			dfs(n+1,left,a[n]);
}

int main(){
	int N;
	std::cin>>N;
	for(int i=0;i<N;++i){
		for(int i=0;i<10;++i){
			std::cin>>a[i];
		}
		J=false;
		dfs(0,0,0);
		if(J==true)
			std::cout<<"YES"<<std::endl;
		else std::cout<<"NO"<<std::endl;
	}
	return 0;
}