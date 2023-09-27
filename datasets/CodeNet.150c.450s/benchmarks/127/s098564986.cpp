#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	for( ; n-- ; ){
		set<string> ans;
		string s;
		
		cin >> s;
		for(int i=0 ; i <= s.size()-2 ; i++ ){
			// s1 := s[0..i]
			// s2 := s[i+1..s.size()-1]
			string s1, s2; 
			for(int j=0 ; j <= i ; j++ ){
				s1.push_back( s[j] );
			}
			for(int j=i+1 ; j < s.size() ; j++ ){
				s2.push_back( s[j] );
			}
			ans.insert( s1 + s2 );
			ans.insert( s2 + s1 );
			reverse( s1.begin() , s1.end() );
			ans.insert( s1 + s2 );
			ans.insert( s2 + s1 );
			reverse( s2.begin() , s2.end() );
			ans.insert( s1 + s2 );
			ans.insert( s2 + s1 );
			reverse( s1.begin() , s1.end() );
			ans.insert( s1 + s2 );
			ans.insert( s2 + s1 );
		}
		cout << ans.size() << endl;
	}
}