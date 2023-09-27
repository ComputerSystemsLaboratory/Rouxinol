#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
std::string str,com;
int a,b,q;
std::cin>>str>>q;
while(q--){
	std::cin>>com>>a>>b;
	if(com=="print"){
		std::cout<<str.substr(a,b-a+1)<<"\n";
	}else if(com=="reverse"){
		for(int i=a,j=b;i<j;i++,j--){
			std::swap(str[i],str[j]);
		}
	}else{
		std::string str2;
		std::cin>>str2;
		for(int i=a;i<=b;i++)str[i]=str2[i-a];
	}
}
}