#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef queue< pair<int, int> > qpii;
typedef vector<int> vi;
typedef vector<int, int> vii;
typedef vector<string> vs;
typedef vector< pair<int, int> > vpii;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	stack<int> s;
	int k;

	while(cin >> k) {
		if(k == 0) {
			cout << s.top() << endl;
			s.pop();
		} else {
			s.push(k);
		}
	}

	return 0;
}