#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<queue>
#include<list>
#include<fstream>

#define REP(i,n) for(int i = 0; i < n ; ++i)
#define LL long long 
using namespace std;

#define int LL

bool func(int x)
{
	if (x < 2)
		return false;

	for (int i = 2; i*i <= x;++i){
		if (x%i == 0)
			return false;
	}

	return true;
}

signed main()
{
	//ifstream cin("Ain.txt");
	//ofstream cout("Aout.txt");

	int a, d, n;

	do{
		cin >> a >> d >> n;

		if (!(a&&d&&n))break;

		a -= d;

		while (n){
			a += d;
			if (func(a))n--;
		}
		cout << a << endl;
	} while (!(a&&d&&n));

}