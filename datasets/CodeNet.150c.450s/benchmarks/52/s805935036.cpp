#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	stack<int> s;
	int n;
	while(1) {
		if(scanf("%d", &n) == EOF) break;
		if(n > 0) {
			s.push(n);
		} else if(n == 0) {
			if(!s.empty()) {
				cout << s.top() << endl;
				s.pop();
			}
		}
	}
}