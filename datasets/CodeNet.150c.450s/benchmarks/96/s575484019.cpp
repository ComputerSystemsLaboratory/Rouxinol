#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>

using namespace std;

inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}

typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EACH(t,i,c) for(t::iretator i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

const double EPS = 1e-10;


int main() {
	int n;
	vs button(10, "");
	vi buttonnum(10, 0);

	button[0] = "";
	button[1] = ".,!? ";
	button[2] = "abc";
	button[3] = "def";
	button[4] = "ghi";
	button[5] = "jkl";
	button[6] = "mno";
	button[7] = "pqrs";
	button[8] = "tuv";
	button[9] = "wxyz";

	cin >> n;
		REP(k, n) {
			string input;
			cin >> input;
			string output = "";
			int size = input.size();
			int lastnum = 0;

			REP(i, size) {
				switch(input[i]) {
				case '0':
					if(lastnum) {
						output += button[lastnum][(buttonnum[lastnum]-1)%button[lastnum].size()];
						buttonnum[lastnum] = 0;
						lastnum = 0;
						break;
					}
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':			
				case '6':			
				case '7':			
				case '8':			
				case '9':
					++buttonnum[input[i]-'0'];
					lastnum = input[i]-'0';
					break;
				}
			}

			cout << output << endl;
	
		
	}
}