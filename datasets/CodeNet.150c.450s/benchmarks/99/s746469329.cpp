#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int f[256];

int power10(int n){
	int a=1;
	for( ; n-- ; a *= 10);
	return a;
}

bool isMCXI(char c){
	return ( c == 'm' || c == 'c' || c == 'x' || c == 'i' )? true : false ;
}

int to_int(string s){
	int n = 0;
	
	for(int i=0 ; i < (int)s.size() ; i++ ){
		if( isMCXI(s[i]) ){
			n += f[ s[i] ];
		}else{
			n += ( s[i] - '0' ) * f[ s[i+1] ];
			i++;
		}
	}
	return n;
}

string to_MCXI(int n){
	string s = "";
	for(int i=0 ; i <=3 ; i++ ){
		int a = ( n % power10(i+1) ) / power10(i);
		if( a >= 1 ){
			s.push_back( f[i] );
		}
		if( a >= 2 ){
			s.push_back( a + '0' );
		}
	}
	reverse( s.begin() , s.end() );
	return s;
}

int main(){
	int n;
	string a, b;
	f['m'] = 1000;
	f['c'] = 100;
	f['x'] = 10;
	f['i'] = 1;
	f[3] = 'm';
	f[2] = 'c';
	f[1] = 'x';
	f[0] = 'i';
	
	cin >> n;
	for(int i=0 ; i<n ; i++ ){
		cin >> a >> b;
		cout << to_MCXI( to_int(a) + to_int(b) ) << endl;
	}
}