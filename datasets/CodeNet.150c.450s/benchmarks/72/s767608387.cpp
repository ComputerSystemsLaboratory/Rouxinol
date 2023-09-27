#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		if(isupper(str[i])){
			str[i]+='a'-'A';
			cout<<str[i];
		}
		else if(islower(str[i])){
			str[i]+='A'-'a';
			cout<<str[i];
		}else{
			cout<<str[i];
		}
	}
	cout<<endl;
	return 0;
}