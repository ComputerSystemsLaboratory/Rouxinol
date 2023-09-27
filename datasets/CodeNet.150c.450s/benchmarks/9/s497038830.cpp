#include<iostream>
#include<string>
using namespace std;

int main(void){
	int m, n, h;
	string s;
	cin>>s;
	while(s!="-"){
		n=s.length();
		cin>>m;
		while(m--){ 
			cin>>h;
			s=s.substr(h, n-h)+s.substr(0, h);
		}
		cout<<s<<"\n";
		cin>>s;
	}
	return(0);
}
