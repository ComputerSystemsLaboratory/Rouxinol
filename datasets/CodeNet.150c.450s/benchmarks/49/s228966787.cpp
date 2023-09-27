#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <cctype>
#include <cstdio>
#include <iomanip>
#include <functional>
#include <stack>
#include <numeric>
#define PI 3.1415926535
#define FOR(i,n) for (int i=0; i<(n) ;i++)
#define INF 114514810

using namespace std;

int n, t, sum;
vector<int> s;

int main(){
	while (cin >> n){
		if (n == 0) break;
		FOR(i, n) {
			cin >> t;
			s.push_back(t);
		}
			sort(s.begin(), s.end());
		sum = accumulate(s.begin() + 1, s.end() - 1, 0);
		cout << sum / (n - 2) << endl;
		s.clear();
	}
}