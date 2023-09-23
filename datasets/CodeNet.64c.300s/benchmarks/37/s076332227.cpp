#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int main()
{
	int n;
	while(cin >> n && n)
	{
		int count=0;
		for(int i=1;i<n;i++)
		{
			int sum=i;
			for(int j=i+1;j<n;j++)
			{
				sum+=j;
				if(sum>n)break;
				else if(sum==n)
				{
					count++;
					break;
				}
			}
		}
		cout << count << endl;
	}

	return 0;
}