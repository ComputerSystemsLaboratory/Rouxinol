#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<ctype.h>
#include<stack>
#include<math.h>
#include <string>
#include<algorithm>
#include<iomanip>
#define _for(i,a,b) for(int i = (a);i < (b);i++)
#define mset(x) memset(x,0,sizeof(x));
using namespace std;
const int maxp = 200005;
int r[maxp],n;
int main() {
	cin>>n;
	for(int i = 1; i <= n;i++) cin>>r[i];
	int maxn = -2000000000;
	int minn = r[1];
	for(int i = 2; i<= n;i++)
	{
		maxn=max(maxn,r[i] - minn);
		minn = min(minn,r[i]);
	}
	cout<<maxn<<endl;
	return 0;
}
