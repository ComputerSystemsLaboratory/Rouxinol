#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>
using namespace std;


int main()
{
	int n, s[101];
	while (cin >>n &&n> 0) {
		int mean = 0;
		for (int i = 0; i < n; i++) cin >> s[i];
		sort(s,s+n);
		for (int t = 1; t < n - 1; t++)mean += s[t];
		cout << mean/(n-2) << endl;
	}
    return 0;
}