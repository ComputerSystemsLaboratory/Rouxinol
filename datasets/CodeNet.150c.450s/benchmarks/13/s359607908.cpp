#include <iostream>
#include <string>
using namespace std;

int main(){
	string s, p;
	getline(cin, s);
	getline(cin, p);
	
	s += s;
	
	int a = s.find(p);
	
	if(a == -1) cout<<"No"<<endl;
	else        cout<<"Yes"<<endl;

	return 0;
}