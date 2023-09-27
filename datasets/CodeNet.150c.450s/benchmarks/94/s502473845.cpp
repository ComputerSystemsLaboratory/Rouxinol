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
	int n,t;
	vector<int> a;
	cin >> n;
	for(int i = 0;i < n;i++) {
		cin >> t;
		a.push_back(t);
	}
	bool flag = true;
	int count = 0;
	while(flag) {
		flag = false;
		for(auto itr = a.begin() + 1;itr != a.end();itr++) {
			if(*itr < *(itr - 1)) {
				iter_swap(itr,itr-1);
				flag = true;
				count++;
			}
		}
	}
	for(int i = 0;i < a.size()-1;i++) cout << a[i] << " ";
	cout << a[a.size()-1] << endl << count << endl;
}

