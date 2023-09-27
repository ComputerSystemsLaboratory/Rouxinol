#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

long long int n, t, sum;
vector<int> v;

int main(){
	cin >> n;
	while (cin >> t) v.push_back(t);
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) sum += v[i];
	cout << v[0] << " " << v[n - 1] << " " << sum << endl; //accumulate(v.begin(), v.end(), 0)
}