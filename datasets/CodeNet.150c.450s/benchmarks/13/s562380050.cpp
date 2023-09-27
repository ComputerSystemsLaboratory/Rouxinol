#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,p;
	
	cin>>s>>p;
	int l = p.length();
	int inc = 0;

	for(int i=0;i<l;++i){
		if(s.find(p) != string::npos){inc = 1;break;}
		
		s = s[s.length()-1] + s.substr(0,s.length()-1);
	}
	
	cout<<(inc?"Yes":"No")<<endl;
	
}