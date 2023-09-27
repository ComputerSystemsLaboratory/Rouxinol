#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <utility>
#include <cmath>
#include <sstream>
#define F first
#define S second
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
int main() {
	int n;
	while (cin >> n && n) {
		vector<long long> a;
		a.push_back(0);
		for(int i=0;i<n;i++)
		{
			long long x;
			cin>>x;
			a.push_back(x);
		}
		for(int i=1;i<a.size();i++)
		{
			a[i]+=a[i-1];
		}
		long long ans=a[1];
		for(int r=0;r<a.size();r++)
		{
			for(int l=r+1;l<a.size();l++)
			{
				ans=max(ans,a[l]-a[r]);
			}
		}
		cout<<ans<<endl;
	}




	return 0;
}