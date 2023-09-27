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

int main(int argc,char** argv) {
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i = 0;i < n;i++) cin >> a[i];
	for(int j = 0;j < n - 1;j++) cout << a[j] << " ";
	cout << a[n-1] << endl;
	for(int i = 1;i < n;i++) {
		int v = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > v){ a[j+1] = a[j]; j--;}
		a[j+1] = v;
		for(int j = 0;j < n - 1;j++) cout << a[j] << " ";
		cout << a[n-1];
		if(i != n) cout << endl;
	}
	delete a;
}

