#define _USE_MATH_DEFINES
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<list>
#include<stack>
#include<queue>
#include<cctype>
#include<iomanip>
#include<functional>
#include<numeric>
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int n;
	int a[101] = {};
	int max = 0;
	while (cin >> n) {
		a[n]++;
		if (max < a[n])max = a[n];
	}
	for (int i = 0; i < 101; i++)if(max==a[i])cout << i << endl;
	return 0;
}