#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int s_to_i(string s){
	int res = 0;
	for(int i=0 ; i < s.size() ; i++ ){
		res = res * 10 + (s[i] - '0');
	}
	return res;
}

string i_to_s(int n){
	string s;
	do{
		s.push_back( n % 10 + '0');
		n /= 10;
	}while( n );
	reverse( s.begin() , s.end() );
	return s;
}

int main(){
	string a[21];
	int L;
	while( cin >> a[0] >> L ){
		if( a[0] == "0" && L == 0 ) break;
		int i = 0;
		// h[a[i]] := j;
		map<int,int> h;

		while( true ){
			if( h.count( s_to_i(a[i]) ) ){
				int j = h[ s_to_i(a[i]) ];
				cout << j << " " << s_to_i(a[i]) << " " << (i - j) << endl;
				break;
			}else{
				h[ s_to_i(a[i]) ] = i;
				
				string s = a[i];
				while( s.size() < L ) s = "0" + s;
				sort( s.begin() , s.end() );
				int small = s_to_i(s);
				reverse( s.begin() , s.end() );
				int large = s_to_i(s);
				int next = large - small;
				a[i+1] = i_to_s(next);
				i++;
			}
		}
	}
}