#define _USE_MATH_DEFINES 
#include <cmath>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<vector>
#define rep(i,start,n) for(int i=start;i<n;i++)
#define And &&
#define Or ||
#define Lb cout<<endl
using namespace std;

int main(void) {
	int n, x,sum;
	while(true){
		sum = 0;
		cin >> n >> x;
		if (n == 0 And x == 0)break;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int r = x - i - j;
				if (j < r And r <= n) sum++;
			}
		}
		cout << sum << endl;
	}
}