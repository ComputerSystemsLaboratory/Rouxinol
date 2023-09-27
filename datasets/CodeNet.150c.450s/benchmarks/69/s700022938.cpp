#include<cstdio>
#include<iostream>
#include<cmath>
#include<ctype.h>
#include<vector>
#include<cstdlib>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<stack>
#include<map>

#define ll long long
#define LL long long
#define ULL unsigned long long 
#define ull unsigned long long 
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)

using namespace std;
int N;


int ball[11];


bool solve(int i,int tmp_1,int tmp_2) {
	if (tmp_1 < ball[i] && tmp_2 < ball[i]) 
		return max(solve(i + 1, ball[i], tmp_2), solve(i + 1, tmp_1, ball[i]));
	
	if (tmp_1 < ball[i] && tmp_2 >= ball[i]) 
		return solve(i + 1, ball[i], tmp_2);
	
	if (tmp_1 >= ball[i] && tmp_2 < ball[i]) 
		return solve(i + 1, tmp_1, ball[i]);
	
	if (i == 10) 
		return true;
	
	if (tmp_1 >= ball[i] && tmp_2 >= ball[i]) 
		return false;
	

}

int main()
{
	int tmp[2] = {};
	cin >> N;
	REP(i, N) {
		REP(j, 10) {
			cin >> ball[j];
		}
		if (solve(0, 0, 0)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}

	return 0;
}