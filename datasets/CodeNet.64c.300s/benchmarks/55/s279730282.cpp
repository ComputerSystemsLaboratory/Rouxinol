#include<iostream>
using namespace std;

int main()
{
	int num;
	for( int i=1; ; i++ ) {
		cin>>num;
		if( 0==num ) { break; }
		cout <<"Case "<<i<<": "<<num<<endl;
	}
	 
    return 0;
}