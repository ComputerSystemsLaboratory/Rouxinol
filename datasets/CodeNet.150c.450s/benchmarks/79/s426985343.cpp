#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n, r;
	while (cin >> n >> r, n || r){
		stack<int> st;
		for (int i = 1; i <= n; i++)st.push(i);
		for (int i = 0; i < r; i++) {
			int p, c; cin >> p >> c;
			stack<int>st1, st2;
			for (int i = 0; i < p - 1; i++) { st1.push(st.top()); st.pop(); }
			for (int i = 0; i < c; i++) { st2.push(st.top()); st.pop(); }
			for (int i = 0; i < p - 1; i++) { st.push(st1.top()); st1.pop(); }
			for (int i = 0; i < c; i++) { st.push(st2.top()); st2.pop(); }
		}
		cout << st.top() << endl;
	}
}