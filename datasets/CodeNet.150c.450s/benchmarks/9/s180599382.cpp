#include <iostream>
#include <string>
using namespace std;

int main(){
	int a,b;
	string s,s1,s2;
	
	while(cin>>s){
		if(s=="-")break;
		cin>>a;
		for(int i=0;i<a;i++){
			cin>>b;
			for(int j=0;j<s.size();j++){
				if(j<b){
					s1+=s[j];
				}else{
					s2+=s[j];
				}
			}
			s=s2+s1;
			s1="";
			s2="";
		}
		cout<<s<<endl;
	}
	return 0;
}
	