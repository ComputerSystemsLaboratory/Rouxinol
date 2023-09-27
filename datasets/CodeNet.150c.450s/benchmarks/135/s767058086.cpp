#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int a[2][1500000];

int main() 
{
	int n,m;
	while(cin >> n >> m && n>0 && m>0)
	{
		int h[1500]={0};
		int w[1500]={0};
		for(int i=0;i<n;i++){ cin >> h[i];}
		for(int i=0;i<m;i++){ cin >> w[i];}
		
		fill(a[0],a[0]+1500000,0);
		fill(a[1],a[1]+1500000,0);
		
		for(int i=0;i<n;i++){
			int sum =0;
			for(int j=i;j<n;j++)
			{
				sum+=h[j];
				a[0][sum-1]++;
			}
		}
		for(int i=0;i<m;i++){
			int sum =0;
			for(int j=i;j<m;j++)
			{
				sum+=w[j];
				a[1][sum-1]++;
			}
		}
		
		int ans=0;
		for(int i=0;i<1500000;i++)
		{
			ans += a[0][i]*a[1][i];
		}
		cout << ans << endl;	
	}
	return 0 ;
}