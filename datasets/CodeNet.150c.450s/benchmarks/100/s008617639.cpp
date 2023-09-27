#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int n;
	long long s = 1;
	cin >> n;
	while (n)s *= n--;
	cout << s << endl;
	return 0;
}