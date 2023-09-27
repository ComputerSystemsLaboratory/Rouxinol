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

int solve(int n, int m, int d[])
{
	int result[200000];
	result[0] = 0;
	for(int i = 0; i < m; i++){
		result[d[i]] = 1;
	}
	for(int i = 1; i <= n; i++){
		result[i] = 50000;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < m; j++){
			if(d[j] <= i) result[i] = min(result[i - d[j]] + 1, result[i]);
		}
	}
	return result[n];
}



int main()
{
	int n, m;
	int d[20];
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> d[i];
	}
	cout << solve(n, m, d) << endl;
	return 0;
}