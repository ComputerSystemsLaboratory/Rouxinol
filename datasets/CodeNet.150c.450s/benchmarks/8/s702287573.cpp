#include<iostream>
#include<string>

using namespace std;

int main( )
{
	string taro, hanako;
	int tscore, hscore;
	int n;
	cin>>n;
	
	tscore = hscore = 0;
	while( n-- ) {	
		cin>>taro>>hanako;
		if( taro < hanako ) {
			hscore += 3;		
		} else if( hanako < taro ) {
			tscore += 3;
		} else {
			tscore += 1;
			hscore += 1;
		}
	}
	cout<<tscore<<" "<<hscore<<endl;
	
	return 0;
}