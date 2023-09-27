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
	vector<int> a(101),A(101);
	for (int b; cin >> b;) a[b]++;
	A = a;
	sort(A.rbegin(),A.rend());
	for (int i = 0; i < 101; i++) 
		if (a[i] == A[0])cout << i << endl;

	return 0;
}