#include <iostream>
#include <string>
int main(){
 std::string s[3];
 int a,b;
 while(1){
 	getline(std::cin,s[0],' ');
 	getline(std::cin,s[1],' ');
 	getline(std::cin,s[2]);
 	if(s[1] == "?")break;
 	a = std::stoi(s[0]),b=std::stoi(s[2]);
 	if(s[1] == "+"){std::cout<<(a+b) << std::endl;}
 	else if(s[1] == "-"){std::cout<<(a-b)<< std::endl;}
 	else if(s[1] == "*"){std::cout<<(a*b)<< std::endl;}
 	else if(s[1] == "/"){std::cout<<(a/b)<< std::endl;}
 }
}