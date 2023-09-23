#include <iostream>
//using namespace System;

int main()
{
    int d;
	while(std::cin>>d){
		int ans=0;
		for(int i=1;i<600/d;i++){
			ans+=i*d*i*d*d;
		}
		std::cout<<ans<<std::endl;
	}
    return 0;
}