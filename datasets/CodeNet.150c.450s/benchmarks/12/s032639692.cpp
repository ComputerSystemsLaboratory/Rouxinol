/*
* @Author: Samson
* @Date:   2018-05-07 20:48:15
* @Last Modified by:   Samson
* @Last Modified time: 2018-05-07 20:55:02
*/
//   @URL : 
#include<bits/stdc++.h>
#include<algorithm>
#include <cstdlib>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long LL;
const int MAXN = 1e5+10;

int a[255];

int main(void)
{
	ios::sync_with_stdio(false); 
	//cin.tie(0);
	int n;
	cin>>n;
	for(int i = 1; i <= n; ++i)
		cin>>a[i];
	for(int i = 1; i <= n; ++i)
	{
		printf("node %d: key = %d, ", i,a[i]);
		if(i != 1)
			printf("parent key = %d, ",a[i/2] );
		if(i*2 <= n)
			printf("left key = %d, ", a[i*2]);
		if(i*2+1 <= n)
			printf("right key = %d, ",a[i*2+1] );
		printf("\n");
	}
	return 0;
}
