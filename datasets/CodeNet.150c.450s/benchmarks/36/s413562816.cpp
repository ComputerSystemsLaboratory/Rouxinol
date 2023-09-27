#include<iostream>
#include<string>
using namespace std;

int main(){
	int d;
	string str;
	while(1){
		int S = 0;
		getline( cin, str );
		if( str.length()==0 )	break;
		sscanf( str.c_str(), "%d", &d );
		for( int x=d; x<600; x+=d ){
			S += d*x*x;
		}
		cout << S << endl;
	}
	return 0;
}