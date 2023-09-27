#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <iomanip>
  
using namespace std;

#define pi 3.141592653589793

int solve(string s1, string s2, int l1, int l2)
{
	int a[1001][1001];
	for(int i = 0; i <= l1; i++){
		a[i][0] = 0;
	}
	for(int i = 0; i <= l2; i++){
		a[0][i] = 0;
	}
	for(int i = 1; i <= l1; i++){
		for(int j = 1; j <= l2; j++){
			if(s1[i - 1] == s2[j - 1]) a[i][j] = a[i - 1][j - 1] + 1;
			else a[i][j] = max(a[i - 1][j], a[i][j - 1]);
		}
	}
	return a[l1][l2];
}

int main()
{
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		string s1, s2;
		cin >> s1 >> s2;
		cout << solve(s1, s2, s1.length(), s2.length()) << endl;
	}
	return 0;
}