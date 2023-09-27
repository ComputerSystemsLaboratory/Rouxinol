#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>

#define ll long long
#define LL long long
#define ULL unsigned long long 
#define ull unsigned long long 
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)
#define int(x) int x;scanf("%d",&x);
#define double(x) double x;scanf("%lf",&x);
#define string(x) double string;cin>>x;

using namespace std;

int main()
{
	int w, n;
	int tmp[100] = {};
	scanf("%d %d", &w, &n);
	int a[100], b[100];
	int tmp_num;
	REP(i, w) {
		tmp[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		scanf("%d,%d", &a[i], &b[i]);
	}

	for (int i = 0; i < n; i++) {
		tmp_num = tmp[a[i]-1];
		tmp[a[i]-1] = tmp[b[i]-1];
		tmp[b[i]-1] = tmp_num;
	}
	
	REP(i, w) {
		cout << tmp[i] << endl;
	}

	return 0;
}