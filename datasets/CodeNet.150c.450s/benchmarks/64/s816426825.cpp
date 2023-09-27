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

int main(void) {
	int n,a[20],q,m[200],t;
	cin >> n;
	input(n,a);
	cin >> q;
	input(q,m);
	set<int> u;
	unsigned int end = pow(2,n);
	for(unsigned int j = 0;j < end;j++) {
		t = 0;
		for(int k = 0;k < n;k++) if(j & 1 << k)t += a[k];
		u.insert(t);
	}
	for(int i = 0;i < q;i++) {
		if(u.find(m[i]) != u.end()) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

