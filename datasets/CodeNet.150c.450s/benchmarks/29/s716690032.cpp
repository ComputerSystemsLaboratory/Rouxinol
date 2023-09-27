#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

deque<int> lst;
int main() {
	int n, v;
	string s;
	cin >> n;
	rep(i,n) {
		cin >> s;
		if(s == "insert") {
			cin >> v;
			lst.push_front(v);
		} else if(s == "delete") {
			cin >> v;
			auto it = find(lst.begin(), lst.end(), v);
			if(it != lst.end()) lst.erase(it);
		} else if(s == "deleteFirst") {
			lst.pop_front();
		} else if(s == "deleteLast") {
			lst.pop_back();
		}
	}
	for(auto it = lst.begin(); it != --lst.end(); ++it) {
		cout << *it << " ";
	}
	cout << *--lst.end() << endl;
	return 0;
}