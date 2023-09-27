#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main() 
{
	long long n,m;
	while(cin >> n >> m , !(n==0 && m==0))
	{
		pair<long long,long long> a[100000];
		for(int i=0;i<n;i++)
		{
			cin >> a[i].second >> a[i].first;
		}
		
		sort(a,a+n);
		reverse(a,a+n);
		
		long long risk = 0;
		
		for(int i=0;i<n;i++)
		{
			if(m==0){	risk += a[i].first * a[i].second;	}
			else if(a[i].second <= m){	m-=	a[i].second;	}
			else {	risk += (a[i].second - m)*a[i].first;m=0;}
		}
		cout << risk << endl;
		}	
	return 0 ;
}