#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	string p;
	int i,len;
	cin>>s;
	cin>>p;
	len=s.size();
	for(i=0 ; i<len ; i++){
		s.push_back(s[i]);
	}
	if(s.find(p)!=string::npos){
		cout << "Yes" << endl;			
	} else {
		cout << "No" << endl;
	}
	return 0;
}