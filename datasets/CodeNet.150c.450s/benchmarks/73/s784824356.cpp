#include <bits/stdc++.h>

using namespace std;

int n, z;
int sT[4*100000];

void u(int v , int l , int r , int x , int val)
{
	if(x < l || x >= r)
	{
		return;
	}
	if( (r - l) == 1)
	{
		sT[v] += val;
		return;
	}else
	{
		int m = (l+r)/2;
		u(2*v,	l,m ,x,val);
		u(2*v+1,m,r,x,val);
		sT[v] += val;
	}
}
int q(int v , int l , int r , int i , int j)
{
	if(j < l || i >= r)
	{
		return 0;
	}
	else if(i <= l && r-1 <= j)
	{
		return sT[v];
	}else
	{
		int m = (l+r)/2;
		return (q(2*v , l , m , i , j) + q(2*v+1 , m , r , i , j));
	}
}

int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> z;
	int a,b,c;
	while(z--)
	{
		cin >> a >> b >> c;
		if(a == 0)
		{
			u(1,1,n+1,b,c);
		}else
		{
			cout << q(1,1,n+1,b,c) << '\n';
		}
	}
	return 0;
}



