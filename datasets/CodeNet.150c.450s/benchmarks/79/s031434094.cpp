#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
	int n,m;
	while(cin >> n >> m && n>0 && m>0)
	{
		int a[50]={0};
		for(int i=0;i<n;i++){	a[i]=n-i;	}
		
		for(int i=0;i<m;i++)
		{
			int x,y;
			cin >> x >> y;
			rotate(a,a+x-1,a+x+y-1);
		}
		cout << a[0] << endl;
	}
	return 0 ;
}