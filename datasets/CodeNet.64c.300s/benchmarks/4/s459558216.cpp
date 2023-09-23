#include <iostream>

using namespace std;

int main(){
	
	int s[3];
	
	cin>>s[0]>>s[1]>>s[2];
	
	if(s[0]<s[1]&&s[1]<s[2])
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	
}