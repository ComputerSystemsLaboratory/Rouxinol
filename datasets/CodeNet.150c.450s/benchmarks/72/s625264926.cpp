#include<iostream>
#include<cctype>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	string::iterator sp = str.begin();
	while(sp != str.end()){
		if(islower(*sp)){
			*sp=toupper(*sp);
		}else if(isupper(*sp)){
			*sp=tolower(*sp);
		}
		sp++;
	}
	cout<<str<<endl;
	return 0;
}