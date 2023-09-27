#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

template<typename t1, class t2>
void input(t1 count,t2* array) {
	for(t1 i = 0;i < count;i++) {
		cin >> array[i];
	}
}

template<typename t1, class t2>
void output(t1 count,t2* array) {
	for(t1 i = 0;i < count;i++) {
		cout << array[i];
		if(i != count - 1) cout << " ";
	}
	cout << endl;
}

class list {
private:
	class elm {
	public:
		int val;
		bool sav;
		elm* fwd,*bwd;
	};
	elm* top;
public:
	list() {
		top = new elm;
		top->fwd = top;
		top->bwd = top;
		top->sav = true;
	}
	void ins(int x) {
		elm* ne = new elm;
		ne->val = x;
		ne->fwd = top;
		ne->bwd = top->bwd;
		ne->sav = false;
		top->bwd->fwd = ne;
		top->bwd = ne;
	}
	void del(int x) {
		elm *cur = top->bwd;
		while(cur != top) {
			if(cur->val == x) {
				cur->fwd->bwd = cur->bwd;
				cur->bwd->fwd = cur->fwd;
				return;
			}
			cur = cur->bwd;
		}
	}
	void delF() {
		top->bwd = top->bwd->bwd;
		top->bwd->fwd = top;
	}
	void delL() {
		top->fwd = top->fwd->fwd;
		top->fwd->bwd = top;
	}
	void dump() {
		elm *cur = top->bwd;
		while(cur != top) {
			cout << cur->val;
			cur = cur->bwd;
			if(cur != top) cout << " ";
		}
		cout << endl;
	}
};

int main(int argc,char** argv) {
	int n;
	string s;
	cin >> n;
	list l;
	for(int i = 0;i < n;i++) {
		cin >> s;
		if(s == "insert") {
			int a;
			cin >> a;
			l.ins(a);
		}else if(s == "delete") {
			int a;
			cin >> a;
			l.del(a);
		}else if(s == "deleteFirst") l.delF();
		else if(s == "deleteLast") l.delL();
	}
	l.dump();
}

