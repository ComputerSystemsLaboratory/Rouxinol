#include<iostream>

int main(){
	int s[2],a;
	s[0]=0;
	s[1]=0;
	for(int i=0;i<2;++i){
		for(int j=0;j<4;++j){
			std::cin>>a;
			s[i]+=a;
		}
	}
	if(s[0]<s[1])
		std::cout<<s[1]<<std::endl;
	else
		std::cout<<s[0]<<std::endl;
	return 0;
}