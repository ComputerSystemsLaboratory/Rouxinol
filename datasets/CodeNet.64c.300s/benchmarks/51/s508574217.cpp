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
	cin >> n;
	1 <= n <= 20;
	long long ans = n;
	for(int i=n-1;i>1;i--){
		ans *= i;
	}
	cout << ans << endl;
	return 0;
}
