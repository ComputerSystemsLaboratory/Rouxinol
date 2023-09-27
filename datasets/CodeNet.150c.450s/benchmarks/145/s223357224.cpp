#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <map>
using namespace std;
int main() {
	string s,f,l;
	map<string,int> table;
	size_t n = 0;
	while( cin  >> s ) { 
		table[s] += 1;
		if ( table[s] > n ) {
			n = table[s];
			f = s;
		}
		if (s.size() > l.size() ) l = s;
	}
	cout << f << " " << l << endl;
}