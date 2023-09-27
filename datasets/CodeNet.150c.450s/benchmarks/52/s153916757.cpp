#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1000000000
int x;
stack<int>s;
int main() {
	while (cin >> x) {
		if (x)s.push(x);
		else {
			cout << s.top() << endl;
			s.pop();
		}
	}
	
	getchar();getchar();
	return 0;
}
