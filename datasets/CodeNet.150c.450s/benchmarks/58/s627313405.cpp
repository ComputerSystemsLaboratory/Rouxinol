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

template<class T>
class my_stack{
private:
	size_t cAlloc = 0;
	int sp = 0;
	T* arr;
public:
	my_stack(size_t size) {
		cAlloc = size;
		arr = new T[cAlloc];
	}
	T pop() {
		if(sp == 0) return T();
		sp--;
		return arr[sp];
	}
	void push(T e) {
		if(sp == cAlloc) return;
		arr[sp] = e;
		sp++;
		return ;
	}
	void dump() {
		for(int i = 0;i < sp;i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main(int argc,char** argv) {
	vector<string> t;
	string s;
	getline(cin,s);
	int d = 0,r = 0;
	while(d < s.size()) {
		while(r != s.size() && s[r] != ' ') r++;
		t.push_back(s.substr(d,r - d));
		r++;
		d = r;
	}
	my_stack<int> acm(1000);
	for(auto e:t) {
		switch(e[0]) {
		case '+':
			acm.push(acm.pop()+acm.pop());
			break;
		case '-':
			acm.push((acm.pop()-acm.pop()));
			acm.push(-acm.pop());
			break;
		case '*':
			acm.push(acm.pop() * acm.pop());
			break;
		default:
			acm.push(atoi(e.c_str()));
			break;
		}
	}
	cout << acm.pop() << endl;
}

