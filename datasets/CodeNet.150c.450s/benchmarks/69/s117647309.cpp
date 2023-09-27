#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <queue>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstring>
#include <cctype>
#include <cassert>
#include <limits>
#include <functional>
#include <stack>

#define REP(i,n) for(int (i) = 0;(i) < (n) ; ++(i))
#define REPA(a,i,n) for(int (i) = (a) ; (i) < (n) ; ++(i))
#if defined(_MSC_VER)||__cplusplus > 199711L
#define AUTO(r,v) auto r = (v)
#else
#define AUTO(r,v) typeof(v) r = (v)
#endif
#define ALL(c) (c).begin() , (c).end()
#define EACH(it,c) for(AUTO(it,(c).begin());it != (c).end();++it)
#define LL long long 
#define INF  99999999;
#define QUICK_CIN ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int balls[10];

bool is_b[10];

bool check(){
	int b(-1), c(-1);

	REP(i, 10){
		if (is_b[i]){
			if (b > balls[i])
				return false;
			b = balls[i];
		}
		else{
			if (c > balls[i])
				return false;
			c = balls[i];
		}
	}
	return true;
}

bool DFS(int i){
	if (i == 10)
		return check();

	bool ret(false);

	ret |= DFS(i + 1);

	is_b[i] = true;

	ret |= DFS(i + 1);

	is_b[i] = false;

	return ret;
}

int main(){
	QUICK_CIN;

	int n;
	cin >> n;

	REP(i, n){
		REP(j, 10){
			cin >> balls[j];
		}
		cout << (DFS(0) ? "YES" : "NO") << endl;
		fill(is_b, is_b + 10, false);
	}

	return 0;
}