#include<iostream>
#include<string>
#include<vector>
int a,b;
std::string op;
std::vector<int> vec;
const int calc(){
	if(op=="+")return a+b;
	if(op=="-")return a-b;
	if(op=="*")return a*b;
	if(op=="/")return a/b;
}
int main(){
	do{
		std::cin>>a>>op>>b;
		if(op!="?")vec.push_back(calc());
	}while(op!="?");
	for(auto v:vec){
		std::cout<<v<<std::endl;
	}
	return 0;
}