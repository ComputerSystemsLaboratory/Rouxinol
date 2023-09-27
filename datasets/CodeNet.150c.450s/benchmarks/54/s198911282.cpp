#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;
string str,str2;
int main() {
int count=0;
std::cin>>str2;
for(int i=0;i<str2.size();i++)str2[i]=tolower(str2[i]);

while(std::cin.eof()==false){
	std::cin>>str;
	if(str=="END_OF_TEXT")break;
	for(int i=0;i<str.size();i++){
		str[i]=tolower(str[i]);
	}
	if(str2==str)count++;
}
std::cout<<count<<"\n";
}
