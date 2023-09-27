#if 0
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_D&lang=jp
#endif

#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <utility>
#include <stack>
#include <vector>

using namespace std;

#define FOR(var, start, count) for(int var=start; var<count; var++)
#define REP(var, count) FOR(var,0,count)

int main(void) {
	string str;
	cin >> str;
	
	stack<int> stk;
	stack<pair<int, int> > kouho;
	
	
	REP(i, str.size()) {
		if ( str[i] == '\\' ) {
			stk.push(i);
		} else if ( str[i] == '/' ) {
			if ( stk.size() > 0 ) {
				int start = stk.top();
				stk.pop();
				
				int under = 0;
				while ( kouho.size() != 0 ) {
					pair<int, int> prev = kouho.top();
					if ( prev.first > start ) {
						kouho.pop();
						under += prev.second;
					} else {
						break;
					}
				}
				
				kouho.push( make_pair( start, under + i-start ) );
			}
		}
	}
	
	vector<int> res;
	while ( kouho.size() > 0 ) {
		pair<int, int> p = kouho.top();
		kouho.pop();
		
		res.push_back(p.second);
	}
	
	reverse(res.begin(), res.end());
	
	cout << accumulate(res.begin(), res.end(), 0) << endl;
	cout << res.size();
	REP(i, res.size()) { cout << " " << res[i]; }
	cout << endl;
	
}