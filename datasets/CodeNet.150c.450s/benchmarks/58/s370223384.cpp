#include<iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<functional>
#include<utility>
#include<string>
#include<cmath>
#include<climits>
#include<complex>
#include<random>
#include<map>
#include<regex>

using namespace std;

typedef double D;      // ??§?¨?????????????double???long double?????????
typedef complex<D> P;  // Point
typedef pair<P, P> L;  // Line
typedef vector<P> VP;
const D EPS = 1e-9;    // ?¨±??????????????????????????£????????????
#define X real()
#define Y imag()
#define LE(n,m) ((n) < (m) + EPS)
#define GE(n,m) ((n) + EPS > (m))
#define EQ(n,m) (abs((n)-(m)) < EPS)
#define rep(i,n) for(int i=0;i<(n);++(i))

stack<string> dfs;

int main()
{
	string c;
	while (cin >> c) {
		if (c != "+"&&c != "-"&&c != "*")
			dfs.push(c);
		else {
			int num[2], r;
			for (int i = 0; i < 2; ++i) {
				stringstream sstr;
				sstr << dfs.top(); dfs.pop();
				sstr >> num[i];
			}
			if (c == "+")r = num[0] + num[1];
			else if(c == "-")r = num[1] - num[0];
			else r = num[0] * num[1];
			dfs.push(to_string(r));
		}
	}
	cout << stoi(dfs.top()) << endl;
}