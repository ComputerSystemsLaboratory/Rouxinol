#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

pair<string,string> split(string s, int i){
	string s1, s2;
	
	for(int j=0 ; j < s.size() ; j++ ){
		if( j <= i ){
			s1.push_back( s[j] );
		}else{
			s2.push_back( s[j] );
		}
	}
	return pair<string,string> (s1,s2);
}

int main(){
	int m;
	cin >> m;
	for(int i=0 ; i < m ; i++ ){
		string s;
		cin >> s;
		
		set<string> vs;
		for(int i=0 ; i < s.size()-1 ; i++ ){
			pair<string,string> p = split( s , i );
			string s1 = p.first;
			string s2 = p.second;
			vs.insert( s1 + s2 );
			vs.insert( s2 + s1 );
			reverse( s1.begin() , s1.end() );
			vs.insert( s1 + s2 );
			vs.insert( s2 + s1 );
			reverse( s2.begin() , s2.end() );
			vs.insert( s1 + s2 );
			vs.insert( s2 + s1 );
			reverse( s1.begin() , s1.end() );
			vs.insert( s1 + s2 );
			vs.insert( s2 + s1 );
		}
		cout << vs.size() << endl;
	}
}