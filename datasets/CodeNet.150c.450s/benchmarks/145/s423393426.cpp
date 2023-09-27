#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;

string l(string s){
	//if( s[0] <= 'Z' ) s[0] = s[0] - 'Z' + 'z';
	return s;
}

int main(){
	map<string,int> d;
	string s;
	int mx = 0;
	string v = "";
	while( cin >> s ){
		mx = max(mx,++d[l(s)]);
		if( v.size() < s.size() ) 
			v = l(s);
	}
	for( auto i : d)
		if( mx == i.second) cout << i.first << " ";
	cout << v << endl;
		
	
			
			
}