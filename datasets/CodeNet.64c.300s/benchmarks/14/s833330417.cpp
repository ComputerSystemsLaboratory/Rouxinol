#include <stdlib.h>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int a,b;
    std::cin>>a>>b;
	if(a<-1000 || a>1000) return 0;
	if(b<-1000 || b>1000) return 0;
	if(a==b) std::cout<<"a == b"<<std::endl;
	if(a>b) std::cout<<"a > b"<<std::endl;
	if(a<b) std::cout<<"a < b"<<std::endl;
	return 0;
}