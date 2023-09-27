#if 0
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1142&lang=jp
#endif

#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <unordered_set>

#define FOR(var, start, count) for(int var=start; var<count; var++)
#define REP(var, count) FOR(var,0,count)

using namespace std;

int main(void) {

	int M;
	cin >> M;
	REP(dataset, M) {
		string str;
		cin >> str;
		
		unordered_set<string> list;
		
		REP(i, str.size()) {
			string s[2][2];
			s[0][0] = str.substr(0, i);
			s[1][0] = str.substr(i);
			
			s[0][1] = s[0][0];
			reverse(s[0][0].begin(), s[0][0].end());
			s[1][1] = s[1][0];
			reverse(s[1][0].begin(), s[1][0].end());
			
			REP(x, 2) {
				REP(y, 2) {
					REP(z, 2) {
						string k = s[x][y] + s[(x+1)%2][z];
						list.insert(k);
					}
				}
			}
		}
		
		cout << list.size() << endl;
	
	}

}