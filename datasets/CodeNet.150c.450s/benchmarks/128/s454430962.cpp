#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str,rts;
	cin>>str;

	for(unsigned int i=0;i<str.size();i++){
		rts+=str.at((str.size()-(i+1)));
	}
	cout<<rts<<endl;
}