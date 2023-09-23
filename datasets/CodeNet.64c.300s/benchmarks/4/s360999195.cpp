#include <stdlib.h>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int a,b,c;
    std::cin>>a>>b>>c;
	if(a<0 || a>100) return 0;
	if(b<0 || b>100) return 0;
	if(b<0 || b>100) return 0;
	if(a<b && b<c) std::cout<<"Yes"<<std::endl;
	else std::cout<<"No"<<std::endl;
	return 0;
}