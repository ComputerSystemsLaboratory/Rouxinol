#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	while( cin >> n , n ){
		map<char,char> f;
		for(int i=0 ; i<n ; ++i ){
			char c , c_;
			cin >> c >> c_ ;
			f[c] = c_;
		}
		cin >> m;
		string s;
		for(int i=0 ; i<m ; ++i ){
			char c;
			cin >> c;
			if( f.count( c ) )
				s.push_back( f[c] );
			else
				s.push_back( c );
		}
		cout << s << endl;
	}
}