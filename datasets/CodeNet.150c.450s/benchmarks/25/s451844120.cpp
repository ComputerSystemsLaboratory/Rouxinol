#include<iostream>
#include<string>

using namespace std;

int main( )
{

	string str;
	int alphas[28] = { 0 };
	int i;
	
	while( getline( cin, str ) ) {
		for( i=0; i<str.length(); i++ ) {
			if( islower( str[i] ) ) {
				alphas[ str[i]-'a' ]++;
			} else {
				alphas[ str[i]-'A' ]++;	
			}
		}
	}
	for( i=0; i<26; i++ ) {
		cout<<char('a'+i)<<" : "<<alphas[i]<<endl;
	}
	
	return 0;
}