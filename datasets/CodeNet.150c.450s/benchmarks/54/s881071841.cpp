#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string upper(string s){
	string t=s;
	for(int i=0;i<t.size();i++){
		t[i]=toupper(s[i]);
	}
	return t;
}

int main(){
	int cou=0;
	string s1,s2;
	cin>>s1;
	s1=upper(s1);
	
	while(cin>>s2){
		if(s2=="END_OF_TEXT")break;
		s2=upper(s2);
		if(s1==s2){
			cou++;
		}
	}
	cout<<cou<<endl;
	return 0;
}