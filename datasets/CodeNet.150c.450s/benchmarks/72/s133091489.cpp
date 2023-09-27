#include<iostream>
#include<cctype>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	string str;
	int i;
	getline(cin,str);
	for(i=0;i<str.size();i++){
		if(str[i]>='a'&& str[i]<='z'){
			str[i]+='A'-'a';
		}
		else if(str[i]>='A' && str[i]<='Z'){
			str[i]+='a'-'A';
		}
		cout<<str[i];

	}
	cout<<endl;
	return 0;
}