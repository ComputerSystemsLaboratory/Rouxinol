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

int solve(int n, int p[])
{
	int result[101][101];
	for(int i = 0; i < n + 1; i++){
		for(int j = 0; j < n + 1; j++){
			if(i == j) result[i][j] = 0;
			else result[i][j] = 1000000;
		}
	}
	for(int i = 2; i < n + 1; i++){
		for(int j = 1; j < n - i + 2; j++){
			for(int k = j; k < j + i - 1; k++){
				result[j][j + i - 1] = min(result[j][j + i - 1], result[j][k] + result[k + 1][j + i - 1] + p[j - 1] * p[k] * p[j + i - 1]);
			}
		}
	}
	// i : 掛け合わせる行列の個数
	// j : 掛け合わせる行列のうち一番左のもの
	// k : 左から何番目で分けるか
	return result[1][n];
}

int main()
{
	int n;
	cin >> n;
	int p[101];
	for(int i = 1; i < n + 1; i++){
		cin >> p[i - 1] >> p[i];
	}
	cout << solve(n, p) << endl;
	return 0;
}