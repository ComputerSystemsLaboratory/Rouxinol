#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
/*
#define _CRT_SECURE_NO_WARNIGS
#pragma warning(disable:4996)
*/
using namespace std;
typedef long long I;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)

int mo[10];

int f(int a){
	int l(0);
	while (a){
		a /= 10;
		l++;
	}

	return l;
}

int main()
{
	int a, b;
	while (scanf("%d %d",&a,&b)+1){
		cout << f(a+b) << endl;
	}
	return 0;
}