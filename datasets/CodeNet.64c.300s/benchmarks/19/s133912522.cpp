
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>
#include <climits>

using namespace std;

double sq(double x){return x*x;}

int a[5001];

int main(){
	int n;
	while(cin>>n,n){
		for (int i = 0; i < n; i++){
			cin>>a[i+1];
			a[i+1] += a[i];
		}
		int ans = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				ans = max(ans,a[i+1] - a[j]);
			}
		}
		cout << ans << endl;
	}

	return 0;
}