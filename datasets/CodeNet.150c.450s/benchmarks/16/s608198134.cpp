#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

template<typename t1, class t2>
void input(t1 count,t2 array) {
	for(t1 i = 0;i < count;i++) {
		cin >> array[i];
	}
}

template<typename t1, class t2>
void output(t1 count,t2 array) {
	for(t1 i = 0;i < count;i++) {
		cout << array[i];
		if(i != count - 1) cout << " ";
	}
	cout << endl;
}

int main(int argc,char** argv) {
	string s;
	cin >> s;
	int a = 0;
	stack<int> w;
	stack<pair<int,int>> g;
	pair<int,int> f,h;
	for(int i = 0;i < s.size();i++) {
		switch(s[i]){
		case '/':
			if(!w.empty()) {
			a += i - w.top();

			f.first = w.top();
			f.second = i - w.top();
			while(g.size() >= 1 && g.top().first >= w.top() ) {
				h = g.top();
				g.pop();
				f.second += h.second;
			}
			g.push(f);
			w.pop();
			}
			break;
		case '\\':
			w.push(i);

			break;
		}

	}
	cout << a << endl;
	cout << g.size();
	if(!g.empty()) cout << " ";
	stack<int> gg;
	while(!g.empty()) {
		gg.push(g.top().second);
		g.pop();
	}
	while(!gg.empty()) {
		cout << gg.top();
		gg.pop();
		if(!gg.empty()) cout << " ";
	}
	cout << endl;
}

