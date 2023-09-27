#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second
#define ll long long 
#define vi vector<int>
#define vvi vector <vi>

using namespace std;

int a[5];

int main()
{
	while(scanf("%d %d %d",&a[0],&a[1],&a[2])!=EOF)
	{
		sort(a,a+3);
		printf("%d %d %d\n",a[0],a[1],a[2]);
	}
	return 0;
}