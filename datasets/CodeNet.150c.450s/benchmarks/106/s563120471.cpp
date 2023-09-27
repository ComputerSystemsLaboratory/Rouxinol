#include<iostream>
int a,b,c;
int n=0;
int main(){
	std::cin>>a>>b>>c;
	for(int i=a;i<=b;++i){
		if(c%i==0)n+=1;
	}
	std::cout<<n<<std::endl;
	return 0;
}