#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <stack>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define pb(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;



int main() {
	stack<int> s;
	string c;
	int a, b;
	while (cin >> c){
		switch (c[0]) {
		case '+':
			 a = s.top();
			s.pop();
			 b = s.top();
			s.pop();
			s.push(a + b);
			break;
		case'-':
			 a = s.top();
			s.pop();
			 b = s.top();
			s.pop();
			s.push(b - a);
			break;
		case'*':
			 a = s.top();
			s.pop();
			 b = s.top();
			s.pop();
			s.push(a*b);
			break;
		default:
			s.push(atoi(c.c_str()));
		}
	}
	cout << s.top() << endl;

	return 0;
}