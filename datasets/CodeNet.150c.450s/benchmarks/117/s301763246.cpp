#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <iomanip>
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

int n,s[500000],cnt;

void merge(int l,int m,int r) {
	int* ll = new int[m-l+1];
	int* rr = new int[r-m+1];
	ll[m-l] = 0x7fffffff;
	rr[r-m] = 0x7fffffff;
	for(int i = l;i < m;i++)ll[i-l]=s[i];
	for(int i = m;i < r;i++)rr[i-m]=s[i];
	int i = 0,j = 0,c = 0;
	while(c != r-l) {
		cnt++;
		if(ll[i] < rr[j]) {
			s[l+c] = ll[i];
			i++;
		}else {
			s[l+c] = rr[j];
			j++;
		}
		c++;
	}
}

void sort(int l,int r) {
	if(r <= l + 1) return;
	int m = (l + r) / 2;
	sort(l,m);
	sort(m,r);
	merge(l,m,r);
}

int main(void) {
	cin >> n;
	input(n,s);
	sort(0,n);
	output(n,s);
	cout << cnt << endl;
}

