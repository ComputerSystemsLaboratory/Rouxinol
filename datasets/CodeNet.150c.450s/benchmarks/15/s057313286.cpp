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

int n,s[10000],t[500],q,c;

bool exists(int x) {
	for(int i = 0;i < n;i++) if(s[i] == x) return true;
	return false;
}

int main(int argc,char** argv) {
	cin >> n;
	input(n,s);
	cin >> q;
	input(q,t);
	for(int i = 0;i < q;i++) {
		if(exists(t[i]))c++;
	}
	cout << c << endl;
}

