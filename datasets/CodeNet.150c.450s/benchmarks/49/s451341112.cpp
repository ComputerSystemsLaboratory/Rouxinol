#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;

int main() {
	while(true) {
		int n, max=0, min=1000, sum=0;
		cin >> n;
		if(n==0) break;
		for(int i=0; i<n; i++) {
			int input;
			cin >> input;
			sum += input;
			if(input > max) max = input;
			if(input < min) min = input;
		}
		cout << (sum - min - max)/(n-2) << endl;
	}

	return 0;
}