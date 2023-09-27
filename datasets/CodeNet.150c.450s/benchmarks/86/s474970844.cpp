#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#include <set>
#include <map>
//#include <bits/stdc++.h>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long
#define bl bool
#define nn printf("\n");
#define mod 1000000007

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int N, M, P;
	while(cin >> N >> M >> P && N != 0 && M != 0)
	{
		vector<int> dat(N, 0);
		rep(i, N){ cin >> dat[i]; }
		if(dat[M - 1] == 0){ printf("0\n"); }
		else{ printf("%d\n", (accumulate(all(dat), 0) * (100 - P)) / dat[M - 1]); }
	}
	
	return 0;
}