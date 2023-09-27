#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int a=s.size();
	for(int i=0;a>i;i++){
		if(s[i] >='A' && s[i] <= 'Z'){
			s[i]=s[i]+32;
		}
		else if(s[i] >='a' && s[i] <= 'z'){
			s[i]=s[i]-32;
		}
	}
	cout<<s<<endl;
}


