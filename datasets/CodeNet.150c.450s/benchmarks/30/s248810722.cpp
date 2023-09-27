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
}

int main(int argc,char** argv) {
	int n,a[100];
	cin >> n;
	input(n,a);
	int count = 0;
	for(int i = 0;i < n;i++) {
		int m = i;
		for(int j = i+1;j < n;j++) if(a[j] < a[m]) m = j;
		if(m != i) {
			swap(a[i],a[m]);
			count++;
		}
	}
	output(n,a);
	cout << endl << count << endl;
}

