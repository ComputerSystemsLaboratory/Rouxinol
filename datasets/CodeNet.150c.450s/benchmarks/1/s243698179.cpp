#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
#define INF 100000000
using namespace std;
typedef long long ll;
int a[MAX+1],b[MAX+1];
int main()
{	
	int n,length=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	b[1]=a[1];
	for(int i=2;i<=n;i++)
	{
		if(b[length]<a[i])
		{
			b[++length]=a[i];
		}else{
			*lower_bound(b+1,b+1+length,a[i])=a[i];
		}
	}
	cout<<length<<endl;
}
