#ifndef HEADER_H
#define HEADER_H
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<string.h>
#include<map>
#include<set>
#include<algorithm>
#include<stack>
#include<ctype.h>
#include<cstdlib>
#include<cmath>

#define F(t,i,s,r) for(t i=s;i<r;i++)
#define FE(t,i,s,r) for(t i=s;i<=r;i++)
#define R(t,i,s,r) for(t i=s;i>r;i--)
#define RE(t,i,s,r) for(t i=s;i>=r;i--)

using namespace std;
//freopen("i.txt", "r", stdin);
//freopen("o.txt","w",stdout);
#endif
#define ll long long
vector<bool>isprime;
void seiveAtkin (ll n) {
	isprime.resize (n + 1, false);
	isprime[2] = true, isprime[3] = true;
	ll lim = ceil (sqrt (n)), num;
	FE (ll, x, 1, lim) {
		FE (ll, y, 1, lim) {
			num = 4 * x*x + y*y;
			if (num <= n && (num % 12 == 1 || num % 12 == 5)) {
				isprime[num] = true;
			}
			num = 3 * x*x + y*y;
			if (num <= n && num % 12 == 7) {
				isprime[num] = true;
			}
			if (x > y) {
				num = 3 * x*x - y*y;
				if (num <= n && num % 12 == 11) {
					isprime[num] = true;
				}
			}
		}

	}
	FE (ll, i, 5, lim) {
		if (isprime[i]) {
			for (ll j = i*i; j <= n; j += i) {
				isprime[j] = false;
			}
		}
	}
}
int main () {
	int n;
	seiveAtkin (999999);
	vector<int>count;
	count.resize (1000000, 0);
	FE (int, i, 1, 999999) {
		count[i] += count[i - 1];
		if (isprime[i]) {
			count[i]++;
		}
	}
	while (cin>>n)
	{
		cout<<	count[n]<<endl;
	}
}