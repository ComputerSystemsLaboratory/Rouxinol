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

long long int solve(int n, int a[])
{
	long long int result[101][21];
	for(int i = 0; i < 101; i++){
		for(int j = 0; j < 21; j++){
			result[i][j] = 0;
		}
	}
	result[1][a[1]] = 1;
	for(int i = 2; i < n; i++){
		for(int j = 0; j < 21; j++){
			if(j + a[i] <= 20) result[i][j + a[i]] += result[i - 1][j];
			if(j - a[i] >= 0) result[i][j - a[i]] += result[i - 1][j];
		}
	}
	return result[n - 1][a[n]];
}

int main()
{
	int n, a[101];
	cin >> n;
	for(int i = 1; i < n + 1; i++){
		cin >> a[i];
	}
	cout << solve(n, a) << endl;
	return 0;
}