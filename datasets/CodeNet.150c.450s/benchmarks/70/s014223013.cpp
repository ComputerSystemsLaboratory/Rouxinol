
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

int t[] = {
	0,
	31,
	29,
	31,
	30,
	31,
	30,
	31,
	31,
	30,
	31,
	30,
	31
};

string b[] = {
	"Monday",
"Tuesday",
"Wednesday",
"Thursday",
"Friday",
"Saturday",
"Sunday"
};

int main(){
	for (int i = 0; i < 12; i++)
	{
		t[i+1] += t[i];
	}
	int m,d;
	while(~scanf("%d %d",&m,&d),(m||d)){
		int x = t[m-1] + d + 2;
		cout << b[x % 7] << endl;
	}

	return 0;
}