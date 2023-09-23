
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


int main(){
	int a[4],b[4];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
		int hit = 0,brow = 0;
		for (int i = 0; i < 4; i++)
		{
			if(a[i] == b[i])
				hit++;
			else if(find(a,a+4,b[i]) != a+4)
				brow++;
		}

		printf("%d %d\n",hit,brow);
	}

	return 0;
}