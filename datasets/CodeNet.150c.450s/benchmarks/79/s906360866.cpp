#include <iostream>
#include <deque>
#include <queue>
#include <stack>
using namespace std;

int main() {
	int n, r;
	while(cin >> n >> r && (n || r)){
		deque<int> dq;
		for(int i = 1; i <= n; ++i)
			dq.push_front(i);
		
		int p, c;
		for(int i = 0; i < r; ++i){
			cin >> p >> c;
			
			stack<int> ps;
			for(int j = 0; j < p - 1; ++j){
				ps.push(dq.front());
				dq.pop_front();
			}
			
			stack<int> cs;
			for(int j = 0; j < c; ++j){
				cs.push(dq.front());
				dq.pop_front();
			}
			
			for(int j = 0; j < p - 1; ++j){
				dq.push_front(ps.top());
				ps.pop();
			}
			for(int j = 0; j < c; ++j){
				dq.push_front(cs.top());
				cs.pop();
			}
		}
		cout << dq.front() << endl;
	}
	return 0;
}