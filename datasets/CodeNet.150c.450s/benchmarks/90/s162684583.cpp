
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

int t[100];

int main(){
	int x;
	while(cin>>x){
		t[x-1]++;
	}
	int m = *max_element(t,t+100);
	for (int i = 0; i < 100; i++)
	{
		if(m == t[i]) cout << i+1 << endl;
	}

	return 0;
}